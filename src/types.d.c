#include <SDL.h>
#include <stdint.h>

struct Ditherer {
	struct SDL_Surface* (*dither)(struct ImageData* input, uint_32 threshold);
}
