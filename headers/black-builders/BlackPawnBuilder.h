#pragma once
#include <headers/common-builders/PawnBuilder.h>
#include <headers/black-figures/BlackPawn.h>

class BlackPawnBuilder : public PawnBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};