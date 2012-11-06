#include "dot.h"
#include <string>
#include <SDL_image.h>

SDL_Surface *load_image( std::string filename )
{
    //The image that's loaded
    SDL_Surface* loadedImage = NULL;

    //The optimized surface that will be used
    SDL_Surface* optimizedImage = NULL;

    //Load the image
    loadedImage = IMG_Load( filename.c_str() );

    //If the image loaded
    if( loadedImage != NULL )
    {
        //Create an optimized surface
        optimizedImage = SDL_DisplayFormat( loadedImage );

        //Free the old surface
        SDL_FreeSurface( loadedImage );

        //If the surface was optimized
        if( optimizedImage != NULL )
        {
            //Color key surface
            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, SDL_MapRGB( optimizedImage->format, 0, 0xFF, 0xFF ) );
        }
    }

    //Return the optimized surface
    return optimizedImage;
}

void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination ,SDL_Rect* clip = NULL )
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( source, clip, destination, &offset );
}

Dot::Dot() {
	load_files();
	posx = 0;
	posy = 0;

	velx = 0;
	vely = 0;
}

bool Dot::load_files()
{
    //Load the dot image
    
	dot = load_image( "dot20x20.png" );
	
	//If there was a problem in loading the dot
    if( dot == NULL )
    {
        return false;
    }

    return true;
}


void Dot::setXVel(float xvel) {

}

void Dot::jump() {

}

void Dot::handleInput(SDL_Event ev)
{
    //If a key was pressed
    if( ev.type == SDL_KEYDOWN )
    {
        //Adjust the velocity
        switch( ev.key.keysym.sym )
        {
            case SDLK_UP: jump(); break;
//            case SDLK_DOWN: yVel += DOT_HEIGHT / 2; break;
            case SDLK_LEFT: velx -= 10; break;
            case SDLK_RIGHT: velx += 10; break;
        }
    }
    //If a key was released
    else if( ev.type == SDL_KEYUP )
    {
        //Adjust the velocity
        switch( ev.key.keysym.sym )
        {
//            case SDLK_UP: yVel += DOT_HEIGHT / 2; break;
//            case SDLK_DOWN: yVel -= DOT_HEIGHT / 2; break;
            case SDLK_LEFT: velx += 10; break;
            case SDLK_RIGHT: velx -= 10; break;
        }
    }
}

void Dot::move() {
	posx += velx;
	posy -= vely;
}

void Dot::show(SDL_Surface screen) {
	apply_surface( posx, posy, dot, &screen );
}

