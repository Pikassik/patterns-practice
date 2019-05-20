#pragma once
#include <gtest/gtest.h>
#include <headers/Unit.h>

::testing::AssertionResult MaxHpCmp(int expected, Unit* unit);
::testing::AssertionResult HpCmp(int expected, Unit* unit);
::testing::AssertionResult MaxShieldCmp(int expected, Unit* unit);
::testing::AssertionResult ShieldCmp(int expected, Unit* unit);
::testing::AssertionResult ShieldRecoverCmp(int expected, Unit* unit);
::testing::AssertionResult SelfHealingCmp(int expected, Unit* unit);
::testing::AssertionResult AttackDamageCmp(int expected, Unit* unit);
::testing::AssertionResult IsDeadCmp(bool expected, Unit* unit);
::testing::AssertionResult ColorCmp(bool expected, Unit* unit);
