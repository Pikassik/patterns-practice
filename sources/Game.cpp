#include <headers/Game.h>

Game::Game()
  :inactive_squad_(std::make_shared<SquadComposite>())
  ,battle_squad_(std::make_shared<SquadCompositeCombatDecorator>(
      std::make_shared<SquadComposite>()))
  ,total_squad_(std::make_shared<SquadComposite>()) {

  board_.FillBoard();
  inactive_squad_ = std::make_shared<SquadComposite>();
  for (auto& unit: board_.GetUnits()) {
    inactive_squad_->AddUnit(unit);
  }
  total_squad_->AddSquad(inactive_squad_);
  total_squad_->AddSquad(battle_squad_);
}

void Game::RunLoop() {
  bool is_black = false;
  while (true) {
    HandleObservers();
    std::cout << (is_black ? "Blacks' turn:" : "Whites' turn:") << std::endl;
    std::string from, to;
    std::cin >> from >> to;
    auto from_pos = std::make_pair(from[0] - 'a', from[1] - '0' - 1);
    auto to_pos = std::make_pair(to[0] - 'a', to[1] - '0' - 1);
    if (!board_.Move(from_pos, to_pos)) {
      if (board_.Attack(from_pos, to_pos)) {
        total_squad_->RemoveUnit(board_.GetUnit(to_pos));
      }
    }
    is_black ^= 1;
  }
}

void Game::AddObserver(std::shared_ptr<GameObserver> observer) {
  observers_.push_back(observer);
}

void Game::RemoveObserver(std::shared_ptr<GameObserver> observer) {
  std::remove(observers_.begin(), observers_.end(), observer);
}

void Game::HandleObservers() {
  for (auto& observer: observers_) {
    observer->Handle(shared_from_this());
  }
}
