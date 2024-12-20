#ifndef GAME_H
#define GAME_H

#include <SDL.h>

class Game {

private:

	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;


public:

	Game();
	~Game();

	void Initialize();
	void Run();
	void Destroy();

	void ProcessInput();
	void Update();
	void Render();

	int windowWidth;
	int windowHeight;

};

#endif // !GAME_H


