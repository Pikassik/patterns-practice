#include <headers/Director.h>

void Director::SetUnitBuilder(const std::shared_ptr<UnitBuilder>& builder) {
  unit_builder = builder;
}

void Director::CostructUnit() {
  unit_builder->CreateUnit();
  unit_builder->BuildMaxHP();
  unit_builder->BuildHP();
  unit_builder->BuildMaxShield();
  unit_builder->BuildShield();
  unit_builder->BuildShieldRecoverSpeed();
  unit_builder->BuildSelfHealingSpeed();
  unit_builder->BuildAttackDamage();
  unit_builder->BuildColor();
}

std::shared_ptr<Unit> Director::GetUnit() {
  return unit_builder->GetUnit();
}
