#include <gtest/gtest.h>
#include <headers/Game.h>
#include <headers/SelfHealObserver.h>
#include <headers/SelfShieldObserver.h>
#include <headers/BattleObserver.h>
#include <headers/BoardConsoleViewObserver.h>

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


///Release version main\\\

//int main() {
//  std::shared_ptr<Game> game(std::make_shared<Game>());
//  game->AddObserver(std::make_shared<SelfHealObserver>());
//  game->AddObserver(std::make_shared<SelfShieldObserver>());
//  game->AddObserver(std::make_shared<BattleObserver>());
//  game->AddObserver(std::make_shared<BoardConsoleViewObserver>());
//  game->RunLoop();
//  return 0;
//}
