//Christopher de la Iglesia

#include "Game.h"

Game::Game() {
  keys = new bool[MAX_KEY];
  exiting = false;
  event = new Event();
}

Game::~Game() {

}

short int Game::exit() {
  return exiting;
}

void Game::tick(double time) {

  event->tick(time,this);

  //player->tick(time);
  
}
