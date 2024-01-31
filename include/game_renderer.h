#include <SDL.h>

namespace spaceInvaders {

class GameRenderer {
    const int SCREEN_WIDTH = 800, SCREEN_HEIGHT = 600;

    SDL_Window* window = nullptr;
    SDL_Surface* screenSurface = nullptr;
    void window_init();
public:
    GameRenderer();
};

}