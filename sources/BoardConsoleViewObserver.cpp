#include <headers/BoardConsoleViewObserver.h>

void BoardConsoleViewObserver::Handle(std::shared_ptr<Game> game) {
  const auto& board = game->board_.GetBoard();
  for (int i = 1; i <= 8; ++i) {
    std::cout << "      " << i;
  }
  std::cout << std::endl;
  int i = 0;
  for (auto line = board.begin(); line < board.end(); ++line) {
    std::cout << static_cast<char>('a' + i) << ' ';
    for (auto square = (*line).begin(); square < (*line).end(); ++square) {
      if (*square) {
        std::cout << (*square)->GetCurrentHP() << ' ' <<
        (*square)->GetCurrentShield() << " " << "|";
      } else {
        std::cout << "      |";
      }
    }
    std::cout << std::endl;
    ++i;
  }
}
