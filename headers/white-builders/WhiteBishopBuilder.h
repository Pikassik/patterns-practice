#pragma once
#include <headers/common-builders/BishopBuilder.h>
#include <headers/white-figures/WhiteBishop.h>

class WhiteBishopBuilder : public BishopBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};