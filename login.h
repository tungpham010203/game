#pragma once // đảm bảo rằng một tệp mã nguồn được đọc và biên dịch chỉ một lần duy nhất trong quá trình biên dịch.
#ifndef login_H

#define login_H


#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <exception>
#include <string>
#include <SDL2/SDL_ttf.h>
#include <windows.h>
// #include "docGhiFile.cpp"
// #include "erom.h"
class login {
public:
    Game();
    ~Game();
    bool init();
    bool load();
    void close();

    static SDL_Renderer * renderer;
private:
    bool isRunning;
    SDL_Window * window;
    SDL_Rect rectPosition;
    
};

#endif