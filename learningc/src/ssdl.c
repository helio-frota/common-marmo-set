#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>

int main(void)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER) != 0)
    {
        printf("SDL init failure: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *sdl_window = SDL_CreateWindow("test",
                                       SDL_WINDOWPOS_CENTERED,
                                       SDL_WINDOWPOS_CENTERED,
                                       800, 600, 0);
    if (!sdl_window)
    {
        printf("error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    SDL_Delay(3000);
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
}
