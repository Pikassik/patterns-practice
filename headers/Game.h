#pragma once
#include <algorithm>
#include <iostream>
#include <headers/SquadComposite.h>
#include <headers/GameObserver.h>
#include <headers/SquadCompositeCombatDecorator.h>
#include <headers/Board.h>

class Board;
class GameObserver;

class Game : public std::enable_shared_from_this<Game> {
  friend class ObserversTest;
 public:
  Game();
  void RunLoop();
  void AddObserver(std::shared_ptr<GameObserver> observer);
  void RemoveObserver(std::shared_ptr<GameObserver> observer);
  std::shared_ptr<SquadComposite> inactive_squad_;
  std::shared_ptr<SquadCompositeCombatDecorator> battle_squad_;
  std::shared_ptr<SquadComposite> total_squad_;
  Board board_;
 private:
  void HandleObservers();
  std::vector<std::shared_ptr<GameObserver>> observers_;
};