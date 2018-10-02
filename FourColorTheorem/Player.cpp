#include "Player.hpp"

int step = 0;

Player::Player(int x, int y)
{
    testplayer = TextureManager::LoadTexture((resourcepath + "assest/player/p.png").c_str());
    testplayerr1 = TextureManager::LoadTexture((resourcepath + "assest/player/pr1.png").c_str());
    testplayerr2 = TextureManager::LoadTexture((resourcepath + "assest/player/pr2.png").c_str());
    testplayerl1 = TextureManager::LoadTexture((resourcepath + "assest/player/pl1.png").c_str());
    testplayerl2 = TextureManager::LoadTexture((resourcepath + "assest/player/pl2.png").c_str());
    testplayerud1 = TextureManager::LoadTexture((resourcepath + "assest/player/pud1.png").c_str());
    testplayerud2 = TextureManager::LoadTexture((resourcepath + "assest/player/pud2.png").c_str());
    empty = TextureManager::LoadTexture("");
    playerTexture = testplayer;
    destRect.w = destRect.h = 32;
    destRect.x = resetx = x;
    destRect.y = resety = y;
    r = l = u = d = 0;
    visiable = true;
    nomovecount = 0;
    movecountlr = 0;
    movecountud = 0;
    step = 0;
}

void Player::Update(int mc)
{
    l = destRect.x + mc;
    u = destRect.y;
    r = 32 + l;
    d = 32 + u;
    nomovecount ++;
    if (visiable&&(nomovecount>3)&&(movecountud==0)) {
        playerTexture = testplayer;
        movecountlr = 0;
    }
    if (step >= 2) {
        step = 0;
    }
}

void Player::Render()
{
    SDL_RenderCopy(Game::renderer, playerTexture, NULL, &destRect);
}

void Player::TextureControl(){
    if (visiable) {
        if (nomovecount > 0) {
            playerTexture = testplayer;
            movecountlr = movecountud = 0;
        }else if (movecountlr > 0){
            if (step == 1) {
                playerTexture = testplayerr1;
            }else{
                playerTexture = testplayerr2;
            }
        }else if (movecountlr < 0){
            if (step == 1) {
                playerTexture = testplayerl1;
            }else{
                playerTexture = testplayerl2;
            }
        }else if (movecountud != 0){
            if (step == 1) {
                playerTexture = testplayerud1;
            }else{
                playerTexture = testplayerud2;
            }
        }
    }
}

bool Player::Hide(){
    if (visiable) {
        playerTexture = empty;
    }else{
        playerTexture = testplayer;
    }
    visiable = !visiable;
    return visiable;
}

void Player::Movelr(int m){
    destRect.x += m;
    nomovecount = 0;
    movecountlr = m;
    movecountud = 0;
    step++;
}

void Player::TextureChangeByRightMoveOfMap(int m){
    nomovecount = 0;
    movecountlr = m;
    movecountud = 0;
    step++;
}

void Player::Moveud(int m){
    destRect.y += m;
    nomovecount = 0;
    movecountud = m;
    movecountlr = 0;
    step++;
}

int Player::getl(){
    return l;
}

int Player::getr(){
    return r;
}

int Player::getu(){
    return u;
}

int Player::getd(){
    return d;
}

void Player::Reset(){
    destRect.x = 0;
    destRect.y = 576;
}


