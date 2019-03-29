#pragma once
#include <headers/Unit.h>
#include <headers/factories/WhiteFactory.h>
#include <headers/factories/BlackFactory.h>

class Board {
  friend class BoardTest;
 public:
  Board();
  void FillBoard();
 private:
  std::vector<std::vector<std::shared_ptr<Unit>>> board_;
};