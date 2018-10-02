#ifndef Fire_hpp
#define Fire_hpp
#include "Game.hpp"

class Fire{
public:
    Fire(int x, int y);
    Fire();
    
    void Update(int mc);
    void Render();
    int getl();
    int getr();
    int getu();
    int getd();
    void MoveFollowMap(int movement);
    void Turn();
    void Reset();
private:
    SDL_Texture* fire;
    SDL_Texture* empty;
    SDL_Texture* currect;
    SDL_Rect srcRect, destRect;
    int r, l, u, d;
    int resetx, resety;
    bool infire;
};

#endif /* Fire_hpp */
