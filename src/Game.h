//Christopher de la Iglesia

#ifndef GAME_H
#define GAME_H

#include "SDL/SDL.h"

#include "Player.h"
#include "Event.h"

#define MAX_KEY 140

class Game {

 public:
  Game();
  ~Game();
  short int exit();
  void tick(double time);

  bool* keys;
  bool exiting;

 private:
  int numMons;
  Event* event;
};

#endif
