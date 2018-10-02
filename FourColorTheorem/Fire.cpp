#include "Fire.hpp"

Fire::Fire(int x, int y){
    srcRect.h = srcRect.w = 32;
    srcRect.x = srcRect.y = 0;
    destRect.w = destRect.h = 32;
    destRect.x = resetx = x;
    destRect.y = resety = y;
    r = l = u = d = 0;
    fire = TextureManager::LoadTexture((resourcepath + "assest/fire.png").c_str());
    empty = TextureManager::LoadTexture("");
    currect = empty;
    infire = false;
}

void Fire::Update(int mc){
    l = destRect.x + mc;
    u = destRect.y;
    r = 32 + l;
    d = 32 + u;
}

void Fire::Render(){
    SDL_RenderCopy(Game::renderer, currect, NULL, &destRect);
}

int Fire::getl(){
    return l;
}

int Fire::getr(){
    return r;
}
int Fire::getu(){
    return u;
}

int Fire::getd(){
    return d;
}

void Fire::MoveFollowMap(int movement){
    destRect.x -= movement;
}

void Fire::Reset(){
    destRect.x = resetx;
    destRect.y = resety;
}

void Fire::Turn(){
    if (infire) {
        currect = empty;
    }else{
        currect = fire;
    }
    infire = !infire;
//    cout << infire << endl;
}
