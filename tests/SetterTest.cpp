#include <headers/white-figures/WhiteBishop.h>

TEST(SetterTest, MaxHP) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetMaxHP(i);
    EXPECT_TRUE(MaxHpCmp(i, unit));
  }
}

TEST(SetterTest, HP) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetHP(i);
    EXPECT_TRUE(HpCmp(i, unit));
  }
}

TEST(SetterTest, MaxShield) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetMaxShield(i);
    EXPECT_TRUE(MaxShieldCmp(i, unit));
  }
}

TEST(SetterTest, Shield) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetShield(i);
    EXPECT_TRUE(ShieldCmp(i, unit));
  }
}

TEST(SetterTest, ShieldRecover) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetShieldRecoverSpeed(i);
    EXPECT_TRUE(ShieldRecoverCmp(i, unit));
  }
}

TEST(SetterTest, SelfHealing) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetSelfHealingSpeed(i);
    EXPECT_TRUE(SelfHealingCmp(i, unit));
  }
}

TEST(SetterTest, AttackDamage) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  for (int i = 0; i < 100; ++i) {
    unit->SetAttackDamage(i);
    EXPECT_TRUE(AttackDamageCmp(i, unit));
  }
}

TEST(SetterTest, IsDead) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);
  EXPECT_TRUE(IsDeadCmp(false, unit));
  EXPECT_EQ(false, unit->IsDead());
}

TEST(SetterTest, Color) {
  WhiteBishop bishop;
  Unit* unit = dynamic_cast<Unit*>(&bishop);

  unit->SetColor(false);
  EXPECT_TRUE(ColorCmp(false, unit));
  EXPECT_EQ(false, unit->GetColor());

  unit->SetColor(true);
  EXPECT_TRUE(ColorCmp(true, unit));
  EXPECT_EQ(true, unit->GetColor());
}
