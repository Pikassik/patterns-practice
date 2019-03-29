#pragma once
#include <headers/common-builders/KingBuilder.h>
#include <headers/white-figures/WhiteKing.h>

class WhiteKingBuilder : public KingBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};