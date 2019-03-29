#pragma once
#include <headers/Unit.h>

class King : public Unit {
 public:
  std::vector<std::pair<int, int>> GetPossibleMoves() override;
  std::vector<std::pair<int, int>> GetPossibleDamaged() override;
 protected:
  static const std::vector<std::pair<int, int>> possible_moves_;
  static const std::vector<std::pair<int, int>> possible_damaged_;
};