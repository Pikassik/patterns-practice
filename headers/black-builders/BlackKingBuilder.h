#pragma once
#include <headers/common-builders/KingBuilder.h>
#include <headers/black-figures/BlackKing.h>

class BlackKingBuilder : public KingBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};