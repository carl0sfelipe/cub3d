#include "../inc/cub3d.h"

void	clear_frame_buffer(t_frame *frame)
{
	int	y;
	int	x;

	y = 0;
	while (y < SCREEN_HEIGHT)
	{
		x = 0;
		while (x < SCREEN_WIDTH)
		{
			frame->buffer[y][x] = 0;
			x++;
		}
		y++;
	}
	return ;
}
