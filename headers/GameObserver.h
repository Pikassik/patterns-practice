#pragma once
#include <headers/Game.h>

class Game;

class GameObserver {
  friend class ObserversTest;
 public:
  virtual ~GameObserver() = default;
  virtual void Handle(std::shared_ptr<Game> game) = 0;
};
