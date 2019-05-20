#pragma once
#include <headers/UnitBuilder.h>

class Director {
 public:
  void SetUnitBuilder(const std::shared_ptr<UnitBuilder>& builder);
  void CostructUnit();
  std::shared_ptr<Unit> GetUnit();
 private:
  std::shared_ptr<UnitBuilder> unit_builder;
};