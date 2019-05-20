#include <headers/common-builders/KnightBuilder.h>

void KnightBuilder::BuildMaxHP() {
  unit_->SetMaxHP(400);
}

void KnightBuilder::BuildHP() {
  unit_->SetHP(400);
}

void KnightBuilder::BuildMaxShield() {
  unit_->SetMaxShield(1);
}

void KnightBuilder::BuildShield() {
  unit_->SetShield(1);
}

void KnightBuilder::BuildShieldRecoverSpeed() {
  unit_->SetShieldRecoverSpeed(1);
}

void KnightBuilder::BuildSelfHealingSpeed() {
  unit_->SetSelfHealingSpeed(0);
}

void KnightBuilder::BuildAttackDamage() {
  unit_->SetAttackDamage(3);
}

