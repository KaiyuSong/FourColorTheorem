#include "Map.hpp"

Map::Map(int array[20][40])
{
    ground1 = TextureManager::LoadTexture((resourcepath + "assest/map/ground1.png").c_str());
    ground2 = TextureManager::LoadTexture((resourcepath + "assest/map/ground2.png").c_str());
    ground3 = TextureManager::LoadTexture((resourcepath + "assest/map/ground3.png").c_str());
    ground4 = TextureManager::LoadTexture((resourcepath + "assest/map/ground4.png").c_str());
    stair = TextureManager::LoadTexture((resourcepath + "assest/map/stair.png").c_str());
    ice = TextureManager::LoadTexture((resourcepath + "assest/map/ice.png").c_str());
    door = TextureManager::LoadTexture((resourcepath + "assest/map/door.png").c_str());
    flag1 = TextureManager::LoadTexture((resourcepath + "assest/map/f1.png").c_str());
    flag2 = TextureManager::LoadTexture((resourcepath + "assest/map/f2.png").c_str());
    
    psize = 32;
    LoadMap(array);
    src.x = src.y = 0;
    src.w = src.h = psize;
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            dest[row][col].w = dest[row][col].h = psize;
            dest[row][col].x = col * psize;
            dest[row][col].y = row * psize;
        }
    }
    
}

void Map::LoadMap(int arr[20][40])
{
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            map[row][col] = arr[row][col];
        }
    }
}

void Map::ReLoadMap(int arr[20][40])
{
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            map[row][col] = arr[row][col];
            dest[row][col].x = col*psize;
            dest[row][col].y = row*psize;
        }
    }
    DrawMap();
}

void Map::DrawMap()
{
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            switch (map[row][col]) {
                case 0:
                    break;
                case 1:
                    TextureManager::Draw(flag1, src, dest[row][col]);
                    break;
                case 2:
                    TextureManager::Draw(flag2, src, dest[row][col]);
                    break;
                case -1:
                    TextureManager::Draw(ground1, src, dest[row][col]);
                    break;
                case -2:
                    TextureManager::Draw(ground2, src, dest[row][col]);
                    break;
                case -3:
                    TextureManager::Draw(ground3, src, dest[row][col]);
                    break;
                case -4:
                    TextureManager::Draw(ground4, src, dest[row][col]);
                    break;
                case -5:
                    TextureManager::Draw(ice, src, dest[row][col]);
                    break;
                case 6:
                    TextureManager::Draw(stair, src, dest[row][col]);
                    break;
                case 9:
                    TextureManager::Draw(door, src, dest[row][col]);
                    break;
                default:
                    break;
            }
        }
    }
}

void Map::Reset(){
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            dest[row][col].x = col * psize;
            dest[row][col].y = row * psize;
        }
    }
}

void Map::MoveMap(int movement){
    for (int row = 0; row < 20; row++) {
        for (int col = 0; col < 40; col++) {
            dest[row][col].x -= movement;
        }
    }
}

