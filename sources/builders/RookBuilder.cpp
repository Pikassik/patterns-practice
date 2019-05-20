#include <headers/common-builders/RookBuilder.h>

void RookBuilder::BuildMaxHP() {
  unit_->SetMaxHP(600);
}

void RookBuilder::BuildHP() {
  unit_->SetHP(600);
}

void RookBuilder::BuildMaxShield() {
  unit_->SetMaxShield(5);
}

void RookBuilder::BuildShield() {
  unit_->SetShield(5);
}

void RookBuilder::BuildShieldRecoverSpeed() {
  unit_->SetShieldRecoverSpeed(1);
}

void RookBuilder::BuildSelfHealingSpeed() {
  unit_->SetSelfHealingSpeed(0);
}

void RookBuilder::BuildAttackDamage() {
  unit_->SetAttackDamage(20);
}
