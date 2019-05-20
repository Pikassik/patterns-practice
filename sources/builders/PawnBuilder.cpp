#include <headers/common-builders/PawnBuilder.h>

void PawnBuilder::BuildMaxHP() {
  unit_->SetMaxHP(240);
}

void PawnBuilder::BuildHP() {
  unit_->SetHP(240);
}

void PawnBuilder::BuildMaxShield() {
  unit_->SetMaxShield(0);
}

void PawnBuilder::BuildShield() {
  unit_->SetShield(0);
}

void PawnBuilder::BuildShieldRecoverSpeed() {
  unit_->SetShieldRecoverSpeed(0);
}

void PawnBuilder::BuildSelfHealingSpeed() {
  unit_->SetSelfHealingSpeed(0);
}

void PawnBuilder::BuildAttackDamage() {
  unit_->SetAttackDamage(6);
}

