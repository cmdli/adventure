//Christopher de la Iglesia

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "SDL/SDL.h"
#include "Game.h"
#include "Player.h"

class Graphics {

 public:
  Graphics();
  ~Graphics();
  void tick(double time, Game* game);

 private:
  void blit(SDL_Surface* src, int x, int y);
  SDL_Surface* screen;

};

#endif /* GRAPHICS_H */
