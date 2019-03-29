#include <headers/common-builders/BishopBuilder.h>

void BishopBuilder::BuildMaxHP() {
  unit_->SetMaxHP(450);
}

void BishopBuilder::BuildHP() {
  unit_->SetHP(450);
}

void BishopBuilder::BuildMaxShield() {
  unit_->SetMaxShield(1);
}

void BishopBuilder::BuildShield() {
  unit_->SetShield(1);
}

void BishopBuilder::BuildShieldRecoverSpeed() {
  unit_->SetShieldRecoverSpeed(1);
}

void BishopBuilder::BuildSelfHealingSpeed() {
  unit_->SetSelfHealingSpeed(0);
}

void BishopBuilder::BuildAttackDamage() {
  unit_->SetAttackDamage(12);
}

