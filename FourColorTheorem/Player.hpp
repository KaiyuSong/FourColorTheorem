#ifndef Player_hpp
#define Player_hpp
#include "Game.hpp"

class Player{
public:
    Player(int x, int y);
    ~Player();
    
    void Update(int mc);
    void Render();
    void Movelr(int m);
    void Moveud(int m);
    void Reset();
    bool Hide();
    int getl();
    int getr();
    int getu();
    int getd();
    void TextureControl();
    void TextureChangeByRightMoveOfMap(int m);
private:
    SDL_Texture* playerTexture;
    SDL_Texture* testplayer;
    SDL_Texture* testplayerr1;
    SDL_Texture* testplayerr2;
    SDL_Texture* testplayerl1;
    SDL_Texture* testplayerl2;
    SDL_Texture* testplayerud1;
    SDL_Texture* testplayerud2;
    SDL_Texture* empty;
    SDL_Rect destRect;
    int r, l, u, d;
    int resetx, resety;
    bool visiable;
    int nomovecount, movecountlr, movecountud, step;
};



#endif /* Player_hpp */
