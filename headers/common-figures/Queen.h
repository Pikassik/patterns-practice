#pragma once
#include <headers/Unit.h>

class Queen : public Unit {
 public:
  const std::vector<std::pair<int, int>>& GetPossibleMoves() override;
  const std::vector<std::pair<int, int>>& GetPossibleDamaged() override;
 protected:
  static const std::vector<std::pair<int, int>> possible_moves_;
  static const std::vector<std::pair<int, int>> possible_damaged_;
};