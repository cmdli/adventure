//Christopher de la Iglesia

#include "Event.h"
#include "Game.h"

Event::Event() {
  exit = false;
}

Event::~Event() {

}

void Event::tick(double time, Game* game) {
  while(SDL_PollEvent(&event)) {
    if(event.type == SDL_KEYDOWN)
      game->keys[event.key.keysym.sym] = true;
    if(event.type == SDL_KEYUP)
      game->keys[event.key.keysym.sym] = false;
    if(event.type == SDL_QUIT)
      game->exiting = true;
  }
}
