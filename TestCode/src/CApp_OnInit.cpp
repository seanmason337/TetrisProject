/*
 * CApp_OnInit.cpp
 *
 *  Created on: Sep 16, 2012
 *      Author: seanmason
 */

#include "CApp.h"

bool CApp::OnInit() {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        return false;
    }

    if((Surf_Display = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        return false;
    }

    return true;
}
