#include "Text.hpp"

Text::Text(int x, int y, const char* text, int l){
    TTF_Init();
    srcRect.h = srcRect.w = 32;
    srcRect.x = srcRect.y = 0;
    destRect.w = l;
    destRect.h = 32;
    destRect.x = x;
    destRect.y = y;
    font = TTF_OpenFont((resourcepath + "assest/Bold.ttf").c_str(), 25);
    color = {0,0,0};
    ChangeTextTexture(font, text, color);
}

void Text::ChangeTextTexture(TTF_Font *font, const char* text, SDL_Color color){
    SDL_Surface * pTextSurface = TTF_RenderText_Blended(font,text,color);
    pTextTexture = SDL_CreateTextureFromSurface(Game::renderer, pTextSurface);
    SDL_FreeSurface(pTextSurface);
}

void Text::Render()
{
    SDL_RenderCopy(Game::renderer, pTextTexture, NULL, &destRect);
}

void Text::SpecialChange(const char *text){
    destRect.w = 800;
    destRect.h = 200;
    destRect.x = 0;
    destRect.y = 210;
    ChangeTextTexture(font, text, color);
}

void Text::Update(int newvalue){
    string s = to_string(newvalue);
    char const *value = s.c_str();
    ChangeTextTexture(font, value, color);
}

