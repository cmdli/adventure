//Christopher de la Iglesia

#include "Graphics.h"

Graphics::Graphics() {
  screen = SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);
}

Graphics::~Graphics() {
  SDL_FreeSurface(screen);
  SDL_Quit();
}

void Graphics::tick(double time, Game* game) {
  SDL_FillRect(screen,NULL,0x00FF00);
  //blit(player,game->player->x,game->player->y);
  SDL_Flip(screen);
}

void Graphics::blit(SDL_Surface* src, int x, int y) {
  SDL_Rect offset;
  offset.x = x;
  offset.y = y;

  SDL_BlitSurface(src,NULL,screen,&offset);
  
}
