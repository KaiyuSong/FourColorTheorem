#ifndef Game_hpp
#define Game_hpp
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <iostream>
#include <string>
#include "Player.hpp"
#include "TextureManager.hpp"
#include "Map.hpp"
#include "Robot.hpp"
#include "Fire.hpp"
#include "Money.hpp"
#include "Text.hpp"
using namespace std;

static const string resourcepath = "/Users/songkaiyu/Desktop/Group-Project/330-project/FourColorTheorem/";

class Game {
  
public:
    Game();
    ~Game();
    
    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    
    void handleEvents();
    void update();
    void render();
    void clean();
    bool RightCheck(int pu, int pd, int pl, int pr);
    bool LeftCheck(int pu, int pd, int pl, int pr);
    bool UpCheck(int pu, int pd, int pl, int pr);
    bool DownCheck(int pu, int pd, int pl, int pr);
    bool FallCheck(int pu, int pd, int pl, int pr);
    bool IceCheck(int pu, int pd, int pl, int pr);
    bool CatchCheck(int pu, int pd, int pl, int pr, int eu, int ed, int el, int er);
    bool DoorCheck(int pu, int pd, int pl, int pr);
    void Reset();
    void LevelUp();
    void LevelDown();
    void WindFlow();
    void PlayerDeath();
    void FinshGame(bool win);
    bool running(){
        return isRunning;
    }
    
    static SDL_Renderer *renderer;
    
private:
    SDL_Window *window;
    int level, live;
    int speed;
    bool isRunning;
    int pl, pr, pu, pd;
    int leftside, midscreen, rightside;
    bool mapmove, upable, downable, rightable, leftable, fall, onice, playervisiable, indoor;
    int movecount, mc;
    int windcount;
    bool fireon;
    int firecount;
    int levelcredits, totalcredits;
    int rt;
};


#endif /* Game_hpp */
