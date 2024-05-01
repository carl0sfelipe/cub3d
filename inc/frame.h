#ifndef FRAME_H
# define FRAME_H

# include "img.h"

typedef struct s_frame
{
	t_img		img;
	t_img		wall_tex;
	uint32_t	buffer[SCREEN_HEIGHT][SCREEN_WIDTH];
}				t_frame;
#endif
