#pragma once
#include <headers/common-builders/KnightBuilder.h>
#include <headers/white-figures/WhiteKnight.h>

class WhiteKnightBuilder : public KnightBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};