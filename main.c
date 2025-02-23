//headers
#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "Settings.h"

//Starts up SDL, creates window, and initializes OpenGL

int main(int argc, char ** argv){
	//init everything related to SDL
	SDL_Init(SDL_INIT_EVERYTHING); 
	//create a window with a title, X, Y, width, height and flag of 0
	//Title, width, and height defined in Settings.h
	SDL_Window * window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SWIDTH, SHEIGHT,0);
	//create our renderer, belonging to our window, with index -1, flag of 0
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
	//Temporary code to keep the window up, future iterations will remove this in favor of level system
	SDL_Event event;
	bool leave= false;
	while(!leave){
		SDL_PollEvent(&event);
		switch (event.type){
			case SDL_QUIT:
				leave=true;
				break;
		}
	}
	//quit after loop
	SDL_Quit();
	return 0;
}