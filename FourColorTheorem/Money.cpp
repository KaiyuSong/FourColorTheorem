#include "Money.hpp"

Money::Money(int x, int y){
    srcRect.h = srcRect.w = 32;
    srcRect.x = srcRect.y = 0;
    destRect.w = destRect.h = 24;
    destRect.x = resetx = x+4;
    destRect.y = resety = y+4;
    r = l = u = d = 0;
    money = TextureManager::LoadTexture((resourcepath + "assest/money.png").c_str());
    empty = TextureManager::LoadTexture("");
    currect = money;
    goten = false;
}

void Money::ReLoad(int x, int y){
    destRect.x = resetx = x+4;
    destRect.y = resety = y+4;
    goten = false;
    currect = money;
}

void Money::Update(int mc){
    l = destRect.x + mc;
    u = destRect.y;
    r = 24 + l;
    d = 24 + u;
}

void Money::Render(){
    SDL_RenderCopy(Game::renderer, currect, NULL, &destRect);
}

int Money::getl(){
    return l;
}

int Money::getr(){
    return r;
}
int Money::getu(){
    return u;
}

int Money::getd(){
    return d;
}

void Money::MoveFollowMap(int movement){
    destRect.x -= movement;
}

void Money::Reset(){
    destRect.x = resetx;
    destRect.y = resety;
    currect = money;
    goten = false;
}

void Money::Get(){
    currect = empty;
    goten = true;
}

bool Money::IfGet(){
    return goten;
}
