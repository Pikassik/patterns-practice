#pragma once
#include <headers/Unit.h>

class Pawn : public Unit {
 public:
  virtual const std::vector<std::pair<int, int>>& GetPossibleMoves() override = 0;
  virtual const std::vector<std::pair<int, int>>& GetPossibleDamaged() override = 0;
};