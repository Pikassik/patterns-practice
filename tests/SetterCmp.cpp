#include <tests/SetterCmp.h>

::testing::AssertionResult MaxHpCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->max_health_points_);
  return (expected == unit->max_health_points_) ? ::testing::AssertionSuccess()
                                                : ::testing::AssertionFailure();
}

::testing::AssertionResult HpCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->health_points_);
  return (expected == unit->health_points_) ? ::testing::AssertionSuccess()
                                            : ::testing::AssertionFailure();
}

::testing::AssertionResult MaxShieldCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->max_shield_);
  return (expected == unit->max_shield_) ? ::testing::AssertionSuccess()
                                         : ::testing::AssertionFailure();
}

::testing::AssertionResult ShieldCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->shield_);
  return (expected == unit->shield_) ? ::testing::AssertionSuccess()
                                     : ::testing::AssertionFailure();
}

::testing::AssertionResult ShieldRecoverCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->shield_recover_speed_);
  return (expected == unit->shield_recover_speed_) ? ::testing::AssertionSuccess()
                                                   : ::testing::AssertionFailure();
}

::testing::AssertionResult SelfHealingCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->self_healing_speed_);
  return (expected == unit->self_healing_speed_) ? ::testing::AssertionSuccess()
                                                 : ::testing::AssertionFailure();
}

::testing::AssertionResult AttackDamageCmp(int expected, Unit* unit) {
  EXPECT_EQ(expected, unit->attack_damage_);
  return (expected == unit->attack_damage_) ? ::testing::AssertionSuccess()
                                            : ::testing::AssertionFailure();
}

::testing::AssertionResult IsDeadCmp(bool expected, Unit* unit) {
  EXPECT_EQ(expected, unit->is_dead_);
  return (expected == unit->is_dead_) ? ::testing::AssertionSuccess()
                                      : ::testing::AssertionFailure();
}

::testing::AssertionResult ColorCmp(bool expected, Unit* unit) {
  EXPECT_EQ(expected, unit->color_);
  return (expected == unit->color_) ? ::testing::AssertionSuccess()
                                    : ::testing::AssertionFailure();
}
