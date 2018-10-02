#ifndef Map_hpp
#define Map_hpp
#include "Game.hpp"

class Map{
public:
    Map(int array[20][40]);
    ~Map();
    
    void Update();
    void LoadMap(int arr[20][40]);
    void ReLoadMap(int arr[20][40]);
    void DrawMap();
    void MoveMap(int movement);
    void Reset();
    
private:
    
    SDL_Rect dest[20][40];
    SDL_Rect src;
    
    SDL_Texture* ground1;
    SDL_Texture* ground2;
    SDL_Texture* ground3;
    SDL_Texture* ground4;
    SDL_Texture* stair;
    SDL_Texture* ice;
    SDL_Texture* fire;
    SDL_Texture* door;
    SDL_Texture* flag1;
    SDL_Texture* flag2;

    int map[20][40];
    int psize;
    
};

#endif /* Map_hpp */
