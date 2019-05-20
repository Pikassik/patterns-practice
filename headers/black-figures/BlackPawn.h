#pragma once
#include <headers/common-figures/Pawn.h>

class BlackPawn : public Pawn {
 public:
  const std::vector<std::pair<int, int>>& GetPossibleMoves() override;
  const std::vector<std::pair<int, int>>& GetPossibleDamaged() override;
 protected:
  static const std::vector<std::pair<int, int>> possible_moves_;
  static const std::vector<std::pair<int, int>> possible_damaged_;
};