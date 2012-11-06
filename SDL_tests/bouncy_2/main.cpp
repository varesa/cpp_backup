#include <string>
#include <sstream>

#include <SDL.h>
#include <SDL_image.h>

#include "settings.h"

#include <Windows.h> // DEBUG

using namespace std;

SDL_Event event;

Uint32 start;
Uint32 remaining;

bool init();
bool load_files();
SDL_Surface *load_image( std::string filename );
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL );
void clean_up();

SDL_Surface* screen;
SDL_Surface* dot;

class Dot {
private:
	bool load_files();
	float posx,posy, velx,vely;
	SDL_Surface * dot;
public:
	Dot();
	void handleInput(SDL_Event ev);
	void setXVel(float xvel);
	void jump();

	void move();
	void show(SDL_Surface screen);
};

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

void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination ,SDL_Rect* clip )
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( source, clip, destination, &offset );
}

bool load_files()
{
    //Load the dot image
    
	dot = load_image( "dot20x20.png" );
	
	//If there was a problem in loading the dot
    if( dot == NULL )
    {
        return false;
    }

    //Load the particles

	//red = load_image( "red.bmp" );
 //   green = load_image( "green.bmp" );
 //   blue = load_image( "blue.bmp" );
 //   shimmer = load_image( "shimmer.bmp" );

    //If there was a problem in loading the images
    //if( ( shimmer == NULL ) || ( blue == NULL ) || ( green == NULL ) || ( red == NULL ) )
    //{
    //    return false;
    //}

    //Set alpha
    //SDL_SetAlpha( red, SDL_SRCALPHA | SDL_RLEACCEL, 192 );
    //SDL_SetAlpha( blue, SDL_SRCALPHA | SDL_RLEACCEL, 192 );
    //SDL_SetAlpha( green, SDL_SRCALPHA | SDL_RLEACCEL, 192 );
    //SDL_SetAlpha( shimmer, SDL_SRCALPHA | SDL_RLEACCEL, 192 );

    //If everything loaded fine
    return true;
}


bool init()
{
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
		
        return false;
    }

	if (FULLSCREEN)
		screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_HWSURFACE | SDL_FULLSCREEN );
	else
		screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_HWSURFACE);

	SDL_ShowCursor(0);

    if( screen == NULL )
    {
        return false;
    }

	SDL_WM_SetCaption( title.c_str(), NULL );

    srand( SDL_GetTicks() );

	Dot * dot;

    return true;
}

void clean_up()
{
    SDL_FreeSurface( dot );

    SDL_Quit();
}




Dot::Dot() {
	load_files();
	posx = SCREEN_WIDTH/2-10;
	posy = SCREEN_HEIGHT/2-10;

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
	vely += 10;
}

void Dot::handleInput(SDL_Event ev)
{
    //If a key was pressed
    if( ev.type == SDL_KEYDOWN )
    {
        //Adjust the velocity
        switch( ev.key.keysym.sym )
        {
//            case SDLK_UP: jump(); break;
			case SDLK_UP: vely += 10; break;
            case SDLK_DOWN: vely -= 10; break;
            case SDLK_LEFT: velx -= 10; break;
            case SDLK_RIGHT: velx += 10; break;
        }
    }
    //If a key was released
//    else if( ev.type == SDL_KEYUP )
//    {
//        //Adjust the velocity
//        switch( ev.key.keysym.sym )
//        {
////            case SDLK_UP: yVel += DOT_HEIGHT / 2; break;
////            case SDLK_DOWN: yVel -= DOT_HEIGHT / 2; break;
//            case SDLK_LEFT: velx += 10; break;
//            case SDLK_RIGHT: velx -= 10; break;
//        }
//    }
}

void Dot::move() {
	posx += velx;
	posy -= vely;
	//if (posy < 390)
	//	vely -= 0.2;
	//else {
	//	vely = 0;
	//	posy = 390;
	//}

	if (posx <= 0 || posx >= (SCREEN_WIDTH - 20))
		velx = velx * -1;
	if (posy >= (SCREEN_HEIGHT - 20) || posy <= 0)
		vely = vely * -1;

	//if (vely < 0.1 && vely > -0.1 && posy >= 380)
	//	vely = 0;

	//velx = velx * 0.99;

	//if (vely < 0.1 && vely > -0.1 && posy >= 380)
	//	vely = 0;
	//else
	//	vely -= 0.2;


}

void Dot::show(SDL_Surface screen) {
	apply_surface( posx, posy, dot, &screen );
}


int wmain() {

	if (init() == 0)
		return 1;

	if (load_files() == 0)
		return 1;

	bool run = true;

	Dot dot;

	while(run) {
		start = SDL_GetTicks();
		//Do stuff



		while( SDL_PollEvent( &event ) )
        {
			dot.handleInput(event);

            //If the user has Xed out the window
            if( event.type == SDL_QUIT )
            {
                //Quit the program
                run = false;
            }

			if( event.key.keysym.sym == SDLK_ESCAPE)
				run = false;
        }

		dot.move();

		SDL_FillRect( screen, &screen->clip_rect, SDL_MapRGB( screen->format, 0xFF, 0xFF, 0xFF ) );

		dot.show(*screen);

        //Update the screen
        if( SDL_Flip( screen ) == -1 )
        {
            return 1;
        }
        

		//Do stuff - END
//		stringstream ss;
//		ss << "start: " << start << "\n" << "ticks: " << SDL_GetTicks() << "\n" << "ticks - start: " << SDL_GetTicks() - start << "\n" << "remaining: " << ((1000/FRAMERATE)-(SDL_GetTicks() - start)) << "\n\n";
//		OutputDebugString(ss.str().c_str());
		if(run)
			SDL_Delay((1000/FRAMERATE)-(SDL_GetTicks() - start));

	}

	return 0;

}