#pragma once
#include <headers/common-builders/KnightBuilder.h>
#include <headers/black-figures/BlackKnight.h>

class BlackKnightBuilder : public KnightBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};