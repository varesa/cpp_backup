#include <SDL.h>

class Dot {
private:
	bool load_files();
	float posx,posy, velx,vely;
	SDL_Surface * dot;
public:
	Dot();
	void handleInput(SDL_Event ev);
	void setXVel(float xvel);
	void jump();

	void move();
	void show(SDL_Surface screen);
};