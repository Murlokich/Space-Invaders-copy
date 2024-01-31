#include <cassert>
#include <iostream>

#include "game_renderer.h"

namespace spaceInvaders {

void GameRenderer::window_init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL error: "
                  << SDL_GetError();
        assert(false);
    }
    else {
        window = SDL_CreateWindow("Space Invaders", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (!window) {
            std::cout << "Window could not be created! SDL_Error: " 
                      << SDL_GetError();
            assert(false);
        }
        else {
            screenSurface = SDL_GetWindowSurface(window);
            SDL_FillRect(screenSurface, nullptr, SDL_MapRGB(screenSurface->format, 0x0, 0x0, 0x0));
            SDL_UpdateWindowSurface( window );
            SDL_Event e; bool quit = false; while( quit == false ){ while( SDL_PollEvent( &e ) ){ if( e.type == SDL_QUIT ) quit = true; } }
        }
    }
    SDL_DestroyWindow( window );
    SDL_Quit();   
}

GameRenderer::GameRenderer() {
    window_init();
}

}