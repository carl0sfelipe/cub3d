#include "../inc/cub3d.h"

void	calculate_ray_position(t_raycaster *rc)
{
	rc->camera_x = 2 * rc->screen_x / (double)(SCREEN_WIDTH) - 1;
	return ;
}
