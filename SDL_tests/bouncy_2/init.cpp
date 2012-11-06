#include <SDL.h>
#include <string>
#include <SDL_image.h>

bool init();
bool load_files();
SDL_Surface *load_image( std::string filename );
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL );
void clean_up();

SDL_Surface* screen;
SDL_Surface* dot;

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

bool init()
{
    //Initialize all SDL subsystems
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }

    //Set up the screen
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );

    //If there was an error in setting up the screen
    if( screen == NULL )
    {
        return false;
    }

    //Set the window caption
	SDL_WM_SetCaption( title.c_str(), NULL );

    //Seed random
    srand( SDL_GetTicks() );

    //If everything initialized fine
    return true;
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

void clean_up()
{
    //Free the surfaces

    SDL_FreeSurface( dot );
    //SDL_FreeSurface( red );
    //SDL_FreeSurface( green );
    //SDL_FreeSurface( blue );
    //SDL_FreeSurface( shimmer );

    //Quit SDL
    SDL_Quit();
}