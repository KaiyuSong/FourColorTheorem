#ifndef Text_hpp
#define Text_hpp
#include "Game.hpp"

class Text{
public:
    Text(int x, int y, const char* text, int l);
    Text();
    
    void Update(int newvalue);
    void Render();
    void ChangeTextTexture(TTF_Font *font, const char* text, SDL_Color color);
    void SpecialChange(const char* text);
private:
    SDL_Texture* pTextTexture;
    SDL_Rect srcRect, destRect;
    TTF_Font* font;
    SDL_Color color;
};

#endif /* Text_hpp */
