#include "Robot.hpp"

Robot::Robot(int x, int y)
{
    Right = TextureManager::LoadTexture((resourcepath + "assest/rr.png").c_str());
    Left = TextureManager::LoadTexture((resourcepath + "assest/rl.png").c_str());
    RobotTexture = Left;
    destRect.w = destRect.h = 32;
    destRect.x = resetx = x;
    destRect.y = resety = y;
    r = l = u = d = 0;
    tr = false;
    dir = -1;
}

void Robot::MoveFollowMap(int movement){
    destRect.x -= movement;
}

void Robot::Update(int mc)
{
    destRect.x += dir;
    l = destRect.x + mc;
    u = destRect.y;
    r = 32 + l;
    d = 32 + u;
}

void Robot::Render()
{
    SDL_RenderCopy(Game::renderer, RobotTexture, NULL, &destRect);
}

void Robot::Turn(){
    if (tr) {
        RobotTexture = Left;
    }else
    {
        RobotTexture = Right;
    }
    tr = !tr;
    dir *= -1;
}

void Robot::Movelr(int m){
    destRect.x += m;
}

int Robot::getl(){
    return l;
}

int Robot::getr(){
    return r;
}

int Robot::getu(){
    return u;
}

int Robot::getd(){
    return d;
}

void Robot::Reset(){
    destRect.x = resetx;
    destRect.y = resety;
    tr = false;
    dir = -1;
    RobotTexture = Left;
}

void Robot::ReLoad(int x, int y){
    destRect.x = resetx = x;
    destRect.y = resety = y;
    tr = false;
    dir = -1;
    RobotTexture = Left;
}
