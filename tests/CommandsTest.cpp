#include <headers/SelfHealCommand.h>
#include <headers/SelfShieldCommand.h>
#include <headers/Game.h>

class CommandsTest : public ::testing::Test {
 protected:
  void SetUp() override {
    game = std::make_shared<Game>();
  }

  void TearDown() override {}

  std::shared_ptr<Game> game;
};

TEST_F(CommandsTest, SelfHealCommand) {
  SelfHealCommand sh_command;
  sh_command.SetSquad(game->inactive_squad_);
  int before = game->board_.GetBoard()[0][0]->GetCurrentHP();
  sh_command.DoCommand();
  EXPECT_TRUE(game->board_.GetBoard()[0][0]->GetCurrentHP() >= before);
}

TEST_F(CommandsTest, SelfShieldCommand) {
  SelfShieldCommand ssh_command;
  ssh_command.SetSquad(game->inactive_squad_);
  int before = game->board_.GetBoard()[0][0]->GetCurrentShield();
  ssh_command.DoCommand();
  EXPECT_TRUE(game->board_.GetBoard()[0][0]->GetCurrentHP() >= before);
}