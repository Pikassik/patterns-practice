#include <headers/UnitBuilder.h>
#include <tests/IsFigure.h>
#include <tests/SetterCmp.h>
#include <headers/white-builders/WhiteBishopBuilder.h>
#include <headers/white-builders/WhiteKingBuilder.h>
#include <headers/white-builders/WhiteKnightBuilder.h>
#include <headers/white-builders/WhitePawnBuilder.h>
#include <headers/white-builders/WhiteQueenBuilder.h>
#include <headers/white-builders/WhiteRookBuilder.h>

class BuildTest : public ::testing::Test {
 protected:
  void SetUp() override {}
  void TearDown() override {}
  void CopyPtr() { unit_ptr_ = builder_->unit_; }
  std::shared_ptr<UnitBuilder> builder_;
  std::shared_ptr<Unit> unit_ptr_;
};

TEST_F(BuildTest, Bishop) {
  builder_ = std::make_shared<WhiteBishopBuilder>();
  builder_->CreateUnit();
  CopyPtr();
  ASSERT_TRUE(unit_ptr_ != nullptr);

  builder_->BuildMaxHP();
  EXPECT_TRUE(MaxHpCmp(450, unit_ptr_.get()));

  builder_->BuildHP();
  EXPECT_TRUE(HpCmp(450, unit_ptr_.get()));

  builder_->BuildMaxShield();
  EXPECT_TRUE(MaxShieldCmp(1, unit_ptr_.get()));

  builder_->BuildShield();
  EXPECT_TRUE(ShieldCmp(1, unit_ptr_.get()));

  builder_->BuildShieldRecoverSpeed();
  EXPECT_TRUE(ShieldRecoverCmp(1, unit_ptr_.get()));

  builder_->BuildSelfHealingSpeed();
  EXPECT_TRUE(SelfHealingCmp(0, unit_ptr_.get()));

  builder_->BuildAttackDamage();
  EXPECT_TRUE(AttackDamageCmp(12, unit_ptr_.get()));

  builder_->BuildColor();
  EXPECT_TRUE(ColorCmp(false, unit_ptr_.get()));

  std::shared_ptr<Unit> got_unit = builder_->GetUnit();

  IsBishop(got_unit);
  EXPECT_TRUE(ColorCmp(false, got_unit.get()));
}

TEST_F(BuildTest, King) {
  builder_ = std::make_shared<WhiteKingBuilder>();
  builder_->CreateUnit();
  CopyPtr();
  ASSERT_TRUE(unit_ptr_ != nullptr);

  builder_->BuildMaxHP();
  EXPECT_TRUE(MaxHpCmp(1000, unit_ptr_.get()));

  builder_->BuildHP();
  EXPECT_TRUE(HpCmp(1000, unit_ptr_.get()));

  builder_->BuildMaxShield();
  EXPECT_TRUE(MaxShieldCmp(10, unit_ptr_.get()));

  builder_->BuildShield();
  EXPECT_TRUE(ShieldCmp(10, unit_ptr_.get()));

  builder_->BuildShieldRecoverSpeed();
  EXPECT_TRUE(ShieldRecoverCmp(1, unit_ptr_.get()));

  builder_->BuildSelfHealingSpeed();
  EXPECT_TRUE(SelfHealingCmp(1, unit_ptr_.get()));

  builder_->BuildAttackDamage();
  EXPECT_TRUE(AttackDamageCmp(3, unit_ptr_.get()));

  builder_->BuildColor();
  EXPECT_TRUE(ColorCmp(false, unit_ptr_.get()));

  std::shared_ptr<Unit> got_unit = builder_->GetUnit();

  IsKing(got_unit);
  EXPECT_TRUE(ColorCmp(false, got_unit.get()));
}

TEST_F(BuildTest, Knight) {
  builder_ = std::make_shared<WhiteKnightBuilder>();
  builder_->CreateUnit();
  CopyPtr();
  ASSERT_TRUE(unit_ptr_ != nullptr);

  builder_->BuildMaxHP();
  EXPECT_TRUE(MaxHpCmp(400, unit_ptr_.get()));

  builder_->BuildHP();
  EXPECT_TRUE(HpCmp(400, unit_ptr_.get()));

  builder_->BuildMaxShield();
  EXPECT_TRUE(MaxShieldCmp(1, unit_ptr_.get()));

  builder_->BuildShield();
  EXPECT_TRUE(ShieldCmp(1, unit_ptr_.get()));

  builder_->BuildShieldRecoverSpeed();
  EXPECT_TRUE(ShieldRecoverCmp(1, unit_ptr_.get()));

  builder_->BuildSelfHealingSpeed();
  EXPECT_TRUE(SelfHealingCmp(0, unit_ptr_.get()));

  builder_->BuildAttackDamage();
  EXPECT_TRUE(AttackDamageCmp(3, unit_ptr_.get()));

  builder_->BuildColor();
  EXPECT_TRUE(ColorCmp(false, unit_ptr_.get()));

  std::shared_ptr<Unit> got_unit = builder_->GetUnit();

  IsKnight(got_unit);
  EXPECT_TRUE(ColorCmp(false, got_unit.get()));
}

TEST_F(BuildTest, Pawn) {
  builder_ = std::make_shared<WhitePawnBuilder>();
  builder_->CreateUnit();
  CopyPtr();
  ASSERT_TRUE(unit_ptr_ != nullptr);

  builder_->BuildMaxHP();
  EXPECT_TRUE(MaxHpCmp(240, unit_ptr_.get()));

  builder_->BuildHP();
  EXPECT_TRUE(HpCmp(240, unit_ptr_.get()));

  builder_->BuildMaxShield();
  EXPECT_TRUE(MaxShieldCmp(0, unit_ptr_.get()));

  builder_->BuildShield();
  EXPECT_TRUE(ShieldCmp(0, unit_ptr_.get()));

  builder_->BuildShieldRecoverSpeed();
  EXPECT_TRUE(ShieldRecoverCmp(0, unit_ptr_.get()));

  builder_->BuildSelfHealingSpeed();
  EXPECT_TRUE(SelfHealingCmp(0, unit_ptr_.get()));

  builder_->BuildAttackDamage();
  EXPECT_TRUE(AttackDamageCmp(6, unit_ptr_.get()));

  builder_->BuildColor();
  EXPECT_TRUE(ColorCmp(false, unit_ptr_.get()));

  std::shared_ptr<Unit> got_unit = builder_->GetUnit();

  IsPawn(got_unit);
  EXPECT_TRUE(ColorCmp(false, got_unit.get()));
}

TEST_F(BuildTest, Queen) {
  builder_ = std::make_shared<WhiteQueenBuilder>();
  builder_->CreateUnit();
  CopyPtr();
  ASSERT_TRUE(unit_ptr_ != nullptr);

  builder_->BuildMaxHP();
  EXPECT_TRUE(MaxHpCmp(100, unit_ptr_.get()));

  builder_->BuildHP();
  EXPECT_TRUE(HpCmp(100, unit_ptr_.get()));

  builder_->BuildMaxShield();
  EXPECT_TRUE(MaxShieldCmp(50, unit_ptr_.get()));

  builder_->BuildShield();
  EXPECT_TRUE(ShieldCmp(50, unit_ptr_.get()));

  builder_->BuildShieldRecoverSpeed();
  EXPECT_TRUE(ShieldRecoverCmp(1, unit_ptr_.get()));

  builder_->BuildSelfHealingSpeed();
  EXPECT_TRUE(SelfHealingCmp(2, unit_ptr_.get()));

  builder_->BuildAttackDamage();
  EXPECT_TRUE(AttackDamageCmp(3, unit_ptr_.get()));

  builder_->BuildColor();
  EXPECT_TRUE(ColorCmp(false, unit_ptr_.get()));

  std::shared_ptr<Unit> got_unit = builder_->GetUnit();

  IsQueen(got_unit);
  EXPECT_TRUE(ColorCmp(false, got_unit.get()));
}

TEST_F(BuildTest, Rook) {
  builder_ = std::make_shared<WhiteRookBuilder>();
  builder_->CreateUnit();
  CopyPtr();
  ASSERT_TRUE(unit_ptr_ != nullptr);

  builder_->BuildMaxHP();
  EXPECT_TRUE(MaxHpCmp(600, unit_ptr_.get()));

  builder_->BuildHP();
  EXPECT_TRUE(HpCmp(600, unit_ptr_.get()));

  builder_->BuildMaxShield();
  EXPECT_TRUE(MaxShieldCmp(5, unit_ptr_.get()));

  builder_->BuildShield();
  EXPECT_TRUE(ShieldCmp(5, unit_ptr_.get()));

  builder_->BuildShieldRecoverSpeed();
  EXPECT_TRUE(ShieldRecoverCmp(1, unit_ptr_.get()));

  builder_->BuildSelfHealingSpeed();
  EXPECT_TRUE(SelfHealingCmp(0, unit_ptr_.get()));

  builder_->BuildAttackDamage();
  EXPECT_TRUE(AttackDamageCmp(20, unit_ptr_.get()));

  builder_->BuildColor();
  EXPECT_TRUE(ColorCmp(false, unit_ptr_.get()));

  std::shared_ptr<Unit> got_unit = builder_->GetUnit();

  IsRook(got_unit);
  EXPECT_TRUE(ColorCmp(false, got_unit.get()));
}