#include "snake.h"

/**
 * wait - stop the excuation to control the frame rate
 */
void wait(void)
{
	int delay = FRAME_RATE - (SDL_GetTicks() - last_frame_time);

	if (delay > 0 && delay <= FRAME_RATE)
		SDL_Delay(delay * 1.2);

	last_frame_time = SDL_GetTicks();
}

/**
 * display_text - display text to the screen and wait 2s
 *
 * @message: String that will be rendered to the screen
 */
void display_text(char *message)
{
	char *path = "/usr/share/vlc/skins2/fonts/FreeSans.ttf";
	TTF_Font *Sans = TTF_OpenFont(path, 70);
	SDL_Color black = {0, 0, 0, 255};
	SDL_Surface *surfaceMessage =
		TTF_RenderText_Solid(Sans, message, black);

	SDL_Texture *Message = SDL_CreateTextureFromSurface(screen, surfaceMessage);
	SDL_Rect Message_rect;

	Message_rect.w = 190;
	Message_rect.h = 90;
	Message_rect.x = SCREEN_WIDTH / 2 - Message_rect.w / 2;
	Message_rect.y = SCREEN_HEIGHT / 2 - Message_rect.h / 2;
	SDL_RenderCopy(screen, Message, NULL, &Message_rect);
	SDL_RenderPresent(screen);
	SDL_FreeSurface(surfaceMessage);
	SDL_DestroyTexture(Message);
	TTF_CloseFont(Sans);
	if ((SDL_GetTicks() - begine_message_time) > 1000)
	{
		playing = true;
		restart();
	}
}

/**
 * render - Render objects to the screen
 */
void render(void)
{
	wait();
	SDL_SetRenderDrawColor(screen, 0xFF, 0xFF, 0xFF, 0x00);
	SDL_RenderClear(screen);
	if (playing)
	{
		move(head);
		throw_food_if_eaten();
		SDL_RenderFillRect(screen, egg);
	}
	else
	{

		display_text("You missed!");
	}

	SDL_RenderPresent(screen);
}
