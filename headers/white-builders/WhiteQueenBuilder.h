#pragma once
#include <headers/common-builders/QueenBuilder.h>
#include <headers/white-figures/WhiteQueen.h>

class WhiteQueenBuilder : public QueenBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};