//Christopher de la Iglesia

#ifndef EVENT_H
#define EVENT_H

#include "SDL/SDL.h"
#include "ClassDec.h"

class Event {

 public:
  Event();
  ~Event();
  void tick(double time, Game* game);
  bool exit;

 private:
  SDL_Event event;
};

#endif /*EVENT_H*/
