#pragma once
#include <headers/Unit.h>

class UnitBuilder {
  friend class BuildTest;
 public:
  std::shared_ptr<Unit> GetUnit();
  virtual void CreateUnit() = 0;
  virtual void BuildMaxHP() = 0;
  virtual void BuildHP() = 0;
  virtual void BuildMaxShield() = 0;
  virtual void BuildShield() = 0;
  virtual void BuildShieldRecoverSpeed() = 0;
  virtual void BuildSelfHealingSpeed() = 0;
  virtual void BuildAttackDamage() = 0;
  virtual void BuildColor() = 0;
 protected:
  std::shared_ptr<Unit> unit_;
};