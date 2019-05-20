#include <headers/Game.h>
#include <headers/GameObserver.h>
#include <headers/BattleObserver.h>
#include <headers/SelfHealObserver.h>
#include <headers/SelfShieldObserver.h>

class ObserversTest : public ::testing::Test {
 protected:
  void SetUp() override {
    game = std::make_shared<Game>();
    b_obs = std::make_shared<BattleObserver>();
    sh_obs = std::make_shared<SelfHealObserver>();
    ssh_obs = std::make_shared<SelfShieldObserver>();
  }

  void TearDown() override {}

  bool IsEqualBattleObs(int ind_1, int ind_2, int waited) {
    return b_obs->inactive_days[game->board_.GetBoard()[ind_1][ind_2]] == waited;
  }

  bool IsEqualSelfHPObs(int ind_1, int ind_2, int before) {
    return game->board_.GetBoard()[ind_1][ind_2]->GetCurrentHP() >= before;
  }

  bool IsEqualSelfShieldObs(int ind_1, int ind_2, int before) {
    return game->board_.GetBoard()[ind_1][ind_2]->GetCurrentShield() >= before;
  }

  void HandleObservers() {game->HandleObservers();}

  std::shared_ptr<Game> game;
  std::shared_ptr<BattleObserver> b_obs;
  std::shared_ptr<SelfHealObserver> sh_obs;
  std::shared_ptr<SelfShieldObserver> ssh_obs;
};

TEST_F(ObserversTest, BattleObserver) {
  game->AddObserver(b_obs);
  game->board_.Attack(std::make_pair(0, 0), std::make_pair(7, 7));
  EXPECT_TRUE(IsEqualBattleObs(0, 0, 0));
}

TEST_F(ObserversTest, SelfHealObserver) {
  game->AddObserver(sh_obs);
  HandleObservers();
  int before = game->board_.GetBoard()[0][0]->GetCurrentHP();
  EXPECT_TRUE(IsEqualSelfHPObs(0, 0, before));
}

TEST_F(ObserversTest, SelfShieldObserver) {
  game->AddObserver(ssh_obs);
  HandleObservers();
  int before = game->board_.GetBoard()[0][0]->GetCurrentShield();
  EXPECT_TRUE(IsEqualSelfShieldObs(0, 0, before));
}

