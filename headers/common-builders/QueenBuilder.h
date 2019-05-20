#pragma once
#include <headers/UnitBuilder.h>

class QueenBuilder : public UnitBuilder {
  virtual void CreateUnit() override = 0;
  void BuildMaxHP() override;
  void BuildHP() override;
  void BuildMaxShield() override;
  void BuildShield() override;
  void BuildShieldRecoverSpeed() override;
  void BuildSelfHealingSpeed() override;
  void BuildAttackDamage() override;
  virtual void BuildColor() override = 0;
};