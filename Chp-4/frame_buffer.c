#include "frame_buffer.h"

char *fb = (char *) 0x000B8000;


void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg)
{
	
    fb[i] = c;
    fb[i + 1] = ((fg & 0x0F) << 4) | (bg & 0x0F);
}

void fb_write_sentence(
	char * sentence,
	unsigned short sentence_len, 
	int start_row,
	int start_col,
	unsigned char fg, 
	unsigned char bg
) {
	int i;
	int start_point = start_row*SCREEN_WIDTH + start_col;
	i = 0;
	i = sentence_len - sentence_len;
	for (i=0; i<sentence_len;i++)
	{
		fb_write_cell(start_point+i*2,sentence[i],bg,fg);
	}
}

void fb_clear_screen(void)
{
	int i,j;
	for(i = 0; i < SCREEN_WIDTH; i++)
	{
		for(j = 0; j < SCREEN_HEIGHT; j++)
		{
			fb_write_cell( (j*SCREEN_WIDTH + i)*2,' ',FB_COLOR_BLACK,FB_COLOR_BLACK);
		}
	}
}
