#pragma once
#include <headers/common-builders/QueenBuilder.h>
#include <headers/black-figures/BlackQueen.h>

class BlackQueenBuilder : public QueenBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};