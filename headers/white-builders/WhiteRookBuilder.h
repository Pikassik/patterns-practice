#pragma once
#include <headers/common-builders/RookBuilder.h>
#include <headers/white-figures/WhiteRook.h>

class WhiteRookBuilder : public RookBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};