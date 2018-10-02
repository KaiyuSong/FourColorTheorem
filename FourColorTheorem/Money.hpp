#ifndef Money_hpp
#define Money_hpp
#include "Game.hpp"

class Money{
public:
    Money(int x, int y);
    Money();
    
    void Update(int mc);
    void Render();
    int getl();
    int getr();
    int getu();
    int getd();
    void MoveFollowMap(int movement);
    void Get();
    void Reset();
    void ReLoad(int x, int y);
    bool IfGet();
private:
    SDL_Texture* money;
    SDL_Texture* empty;
    SDL_Texture* currect;
    SDL_Rect srcRect, destRect;
    int r, l, u, d;
    int resetx, resety;
    bool goten;
};
#endif /* Money_hpp */
