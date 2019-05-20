#include <tests/IsFigure.h>

void IsBishop(const std::shared_ptr<Unit>& got_unit) {
  ASSERT_TRUE(got_unit != nullptr);
  EXPECT_TRUE(MaxHpCmp(450, got_unit.get()));
  EXPECT_TRUE(HpCmp(450, got_unit.get()));
  EXPECT_TRUE(MaxShieldCmp(1, got_unit.get()));
  EXPECT_TRUE(ShieldCmp(1, got_unit.get()));
  EXPECT_TRUE(ShieldRecoverCmp(1, got_unit.get()));
  EXPECT_TRUE(SelfHealingCmp(0, got_unit.get()));
  EXPECT_TRUE(AttackDamageCmp(12, got_unit.get()));
}
void IsKing(const std::shared_ptr<Unit>& got_unit) {
  ASSERT_TRUE(got_unit != nullptr);
  EXPECT_TRUE(MaxHpCmp(1000, got_unit.get()));
  EXPECT_TRUE(HpCmp(1000, got_unit.get()));
  EXPECT_TRUE(MaxShieldCmp(10, got_unit.get()));
  EXPECT_TRUE(ShieldCmp(10, got_unit.get()));
  EXPECT_TRUE(ShieldRecoverCmp(1, got_unit.get()));
  EXPECT_TRUE(SelfHealingCmp(1, got_unit.get()));
  EXPECT_TRUE(AttackDamageCmp(3, got_unit.get()));
}
void IsKnight(const std::shared_ptr<Unit>& got_unit) {
  ASSERT_TRUE(got_unit != nullptr);
  EXPECT_TRUE(MaxHpCmp(400, got_unit.get()));
  EXPECT_TRUE(HpCmp(400, got_unit.get()));
  EXPECT_TRUE(MaxShieldCmp(1, got_unit.get()));
  EXPECT_TRUE(ShieldCmp(1, got_unit.get()));
  EXPECT_TRUE(ShieldRecoverCmp(1, got_unit.get()));
  EXPECT_TRUE(SelfHealingCmp(0, got_unit.get()));
  EXPECT_TRUE(AttackDamageCmp(3, got_unit.get()));
}
void IsPawn(const std::shared_ptr<Unit>& got_unit) {
  ASSERT_TRUE(got_unit != nullptr);
  EXPECT_TRUE(MaxHpCmp(240, got_unit.get()));
  EXPECT_TRUE(HpCmp(240, got_unit.get()));
  EXPECT_TRUE(MaxShieldCmp(0, got_unit.get()));
  EXPECT_TRUE(ShieldCmp(0, got_unit.get()));
  EXPECT_TRUE(ShieldRecoverCmp(0, got_unit.get()));
  EXPECT_TRUE(SelfHealingCmp(0, got_unit.get()));
  EXPECT_TRUE(AttackDamageCmp(6, got_unit.get()));
}
void IsQueen(const std::shared_ptr<Unit>& got_unit) {
  ASSERT_TRUE(got_unit != nullptr);
  EXPECT_TRUE(MaxHpCmp(100, got_unit.get()));
  EXPECT_TRUE(HpCmp(100, got_unit.get()));
  EXPECT_TRUE(MaxShieldCmp(50, got_unit.get()));
  EXPECT_TRUE(ShieldCmp(50, got_unit.get()));
  EXPECT_TRUE(ShieldRecoverCmp(1, got_unit.get()));
  EXPECT_TRUE(SelfHealingCmp(2, got_unit.get()));
  EXPECT_TRUE(AttackDamageCmp(3, got_unit.get()));
}
void IsRook(const std::shared_ptr<Unit>& got_unit) {
  ASSERT_TRUE(got_unit != nullptr);
  EXPECT_TRUE(MaxHpCmp(600, got_unit.get()));
  EXPECT_TRUE(HpCmp(600, got_unit.get()));
  EXPECT_TRUE(MaxShieldCmp(5, got_unit.get()));
  EXPECT_TRUE(ShieldCmp(5, got_unit.get()));
  EXPECT_TRUE(ShieldRecoverCmp(1, got_unit.get()));
  EXPECT_TRUE(SelfHealingCmp(0, got_unit.get()));
  EXPECT_TRUE(AttackDamageCmp(20, got_unit.get()));
}
