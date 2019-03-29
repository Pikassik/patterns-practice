#pragma once
#include <headers/Unit.h>

class Pawn : public Unit {
 public:
  virtual std::vector<std::pair<int, int>> GetPossibleMoves() override = 0;
  virtual std::vector<std::pair<int, int>> GetPossibleDamaged() override = 0;
};