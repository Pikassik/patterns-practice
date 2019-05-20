#pragma once
#include <headers/common-builders/RookBuilder.h>
#include <headers/black-figures/BlackRook.h>

class BlackRookBuilder : public RookBuilder {
  void CreateUnit() override;
  void BuildColor() override;
};