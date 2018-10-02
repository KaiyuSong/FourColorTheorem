#include "Game.hpp"

int main(int argc, const char * argv[]) {
    
    const int FPS = 60;
    const int frameDelay = 1000/FPS;
    
    Uint32 frameStart;
    int frameTime;
    
    Game *game = new Game();
    
    game->init("Four Color Theorm", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);
    //Warning: Do not change the false to true;
    while (game->running()) {
        frameStart = SDL_GetTicks();
        game->handleEvents();
        game->update();
        game->render();
        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay>frameTime) {
            SDL_Delay(frameDelay-frameTime);
        }
    }
    game->clean();
    return 0;
}
