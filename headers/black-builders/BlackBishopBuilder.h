#pragma once
#include <headers/common-builders/BishopBuilder.h>
#include <headers/black-figures/BlackBishop.h>

class BlackBishopBuilder : public BishopBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};