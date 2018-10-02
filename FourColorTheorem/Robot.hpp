#ifndef Robot_hpp
#define Robot_hpp
#include "Game.hpp"

class Robot{
public:
    Robot(int x, int y);
    Robot();
    
    void Update(int mc);
    void Render();
    void Movelr(int m);
    int getl();
    int getr();
    int getu();
    int getd();
    void MoveFollowMap(int movement);
    void Turn();
    void Reset();
    void ReLoad(int x, int y);
private:
    SDL_Texture* Right;
    SDL_Texture* Left;
    SDL_Texture* RobotTexture;
    SDL_Rect destRect;
    int r, l, u, d;
    bool tr;
    int dir;
    int resetx, resety;
};

#endif /* Robot_hpp */
