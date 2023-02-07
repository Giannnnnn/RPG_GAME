#ifndef Game_hpp
#define Game_hpp
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class Game {
public:
	Game();
	~Game();
	void init(const char* title, int xposm, int ypos, int width, int height, bool fullscreen);

	void handleEvents();
	void update();
	void render();
	bool running() { return isRunning; };
	void clean();

	static SDL_Renderer* renderer;
	static SDL_Event event;

private:
	bool isRunning = true;
	int cnt = 0;
	SDL_Window *window;
};

#endif /* Game_hpp */
 