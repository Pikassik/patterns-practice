#include <headers/common-builders/QueenBuilder.h>

void QueenBuilder::BuildMaxHP() {
  unit_->SetMaxHP(100);
}

void QueenBuilder::BuildHP() {
  unit_->SetHP(100);
}

void QueenBuilder::BuildMaxShield() {
  unit_->SetMaxShield(50);
}

void QueenBuilder::BuildShield() {
  unit_->SetShield(50);
}

void QueenBuilder::BuildShieldRecoverSpeed() {
  unit_->SetShieldRecoverSpeed(1);
}

void QueenBuilder::BuildSelfHealingSpeed() {
  unit_->SetSelfHealingSpeed(2);
}

void QueenBuilder::BuildAttackDamage() {
  unit_->SetAttackDamage(3);
}
