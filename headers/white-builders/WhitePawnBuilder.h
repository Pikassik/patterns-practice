#pragma once
#include <headers/common-builders/PawnBuilder.h>
#include <headers/white-figures/WhitePawn.h>

class WhitePawnBuilder : public PawnBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};