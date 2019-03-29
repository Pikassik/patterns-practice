#include <headers/Board.h>

Board::Board() :board_(8, std::vector<std::shared_ptr<Unit>>(8)) {}

void Board::FillBoard() {
  WhiteFactory white_factory;
  BlackFactory black_factory;
  board_[0][0] = white_factory.CreateRook();
  board_[1][0] = white_factory.CreateKnight();
  board_[2][0] = white_factory.CreateBishop();
  board_[3][0] = white_factory.CreateQueen();
  board_[4][0] = white_factory.CreateKing();
  board_[5][0] = white_factory.CreateBishop();
  board_[6][0] = white_factory.CreateKnight();
  board_[7][0] = white_factory.CreateRook();

  board_[0][1] = white_factory.CreatePawn();
  board_[1][1] = white_factory.CreatePawn();
  board_[2][1] = white_factory.CreatePawn();
  board_[3][1] = white_factory.CreatePawn();
  board_[4][1] = white_factory.CreatePawn();
  board_[5][1] = white_factory.CreatePawn();
  board_[6][1] = white_factory.CreatePawn();
  board_[7][1] = white_factory.CreatePawn();

  board_[0][7] = black_factory.CreateRook();
  board_[1][7] = black_factory.CreateKnight();
  board_[2][7] = black_factory.CreateBishop();
  board_[3][7] = black_factory.CreateQueen();
  board_[4][7] = black_factory.CreateKing();
  board_[5][7] = black_factory.CreateBishop();
  board_[6][7] = black_factory.CreateKnight();
  board_[7][7] = black_factory.CreateRook();

  board_[0][6] = black_factory.CreatePawn();
  board_[1][6] = black_factory.CreatePawn();
  board_[2][6] = black_factory.CreatePawn();
  board_[3][6] = black_factory.CreatePawn();
  board_[4][6] = black_factory.CreatePawn();
  board_[5][6] = black_factory.CreatePawn();
  board_[6][6] = black_factory.CreatePawn();
  board_[7][6] = black_factory.CreatePawn();
}

bool Board::IsEmpty(const std::pair<int, int>& position) const {
  return board_[position.first][position.second] == nullptr;
}

bool Board::IsBlack(const std::pair<int, int>& position) const {
  return board_[position.first][position.second]->GetColor();
}

bool Board::Move(const std::pair<int, int>& from,
                 const std::pair<int, int>& to) {
  if (!IsEmpty(to)) {
    return false;
  }

  board_[to.first][to.second] = board_[from.first][from.second];
  board_[from.first][from.second] = nullptr;
  return true;
}

bool Board::Attack(const std::pair<int, int>& from,
                   const std::pair<int, int>& to) {
  if (IsEmpty(from) || IsEmpty(to)) {
    return false;
  }

  board_[from.first][from.second]->Attack(board_[to.first][to.second]);

  if (board_[to.first][to.second]->IsDead()) {
    board_[to.first][to.second] = nullptr;
    return true;
  }

  return false;
}

bool Board::Damage(const std::pair<int, int>& position, int hp) {
  if (IsEmpty(position)) {
    return false;
  }

  board_[position.first][position.second]->GetDamage(hp);

  if (board_[position.first][position.second]->IsDead()) {
    board_[position.first][position.second] = nullptr;
  }

  return true;
}

bool Board::Heal(const std::pair<int, int>& position, int hp) {
  if (IsEmpty(position)) {
    return false;
  }

  board_[position.first][position.second]->GetHealing(hp);
  return true;
}

std::shared_ptr<Unit> Board::GetUnit(const std::pair<int, int>& position) {
  return board_[position.first][position.second];
}

std::vector<std::shared_ptr<Unit>> Board::GetUnits() {
  std::vector<std::shared_ptr<Unit>> units;
  for (const auto& line: board_) {
    for (const auto& square: line) {
      if (square != nullptr) {
        units.push_back(square);
      }
    }
  }

  return units;
}
const std::vector<std::vector<std::shared_ptr<Unit>>>& Board::GetBoard() {
  return board_;
}

