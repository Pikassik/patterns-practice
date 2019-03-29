#include <headers/SquadComposite.h>
#include <headers/SquadCompositeCombatDecorator.h>
#include <headers/Board.h>

class SquadCompositeTest : public ::testing::Test{
 protected:
  void SetUp() override {
    squad_ = std::make_shared<SquadComposite>();
  }

  void TearDown() override {}

  std::shared_ptr<SquadComposite> squad_;
};

TEST_F(SquadCompositeTest, SquadComposite) {
  Board board;
  board.FillBoard();
  squad_->AddUnit(board.GetBoard()[0][0]);
  int hp_before = board.GetBoard()[0][0]->GetCurrentHP();
  int sh_before = board.GetBoard()[0][0]->GetCurrentShield();
  squad_->GetSelfHealing();
  EXPECT_TRUE(board.GetUnits()[0]->GetCurrentHP() >= hp_before);
  squad_->GetSelfShieldRecover();
  EXPECT_TRUE(board.GetUnits()[0]->GetCurrentShield() >= sh_before);
}

TEST_F(SquadCompositeTest, SquadCompositeCombatDecorator) {
  Board board;
  board.FillBoard();
  squad_->AddUnit(board.GetBoard()[0][0]);
  int hp_before = board.GetBoard()[0][0]->GetCurrentHP();
  int sh_before = board.GetBoard()[0][0]->GetCurrentShield();
  squad_->GetSelfHealing();
  EXPECT_TRUE(board.GetUnits()[0]->GetCurrentHP() == hp_before);
  squad_->GetSelfShieldRecover();
  EXPECT_TRUE(board.GetUnits()[0]->GetCurrentShield() == sh_before);
}