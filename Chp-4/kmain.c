#include "frame_buffer.h"

int kmain(void)
{
	char sentence[] = "This is a test msg please be advised";
	unsigned short sentence_length = 36;
	
	fb_clear_screen();
	fb_write_sentence(sentence,sentence_length,0,0,FB_COLOR_RED,FB_COLOR_GREEN);

	return 0;
}


