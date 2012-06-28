//Christopher de la Iglesia

#include "SDL/SDL.h"
#include <stdio.h>

#include "Game.h"
#include "Graphics.h"
#include "Event.h"

Game* game;
Graphics* graphics;
Event* event;

double getTime() {
  return SDL_GetTicks()/1000.0; 
}

int main(int argc, char** argv) {
  double time;
  double oldTick;

  SDL_Init(SDL_INIT_EVERYTHING);

  game = new Game();
  graphics = new Graphics();

  oldTick = getTime();
  while(1) {
    time = getTime();
    if(time - oldTick < 0.01)
      continue;
    time = time-oldTick;
    oldTick = getTime();

    game->tick(time);

    graphics->tick(time,game);

    if(game->exit())
      break;

  }

  delete game;
  delete event;
  delete graphics;

  game = NULL;
  event = NULL;
  graphics = NULL;

  SDL_Quit();
}
