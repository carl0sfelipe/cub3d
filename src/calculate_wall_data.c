#include "../inc/cub3d.h"

void	calculate_wall_data(t_raycaster *rc)
{
	rc->wall_height = (int)(SCREEN_HEIGHT / rc->perp_wall_dist);
	rc->wall_top = -rc->wall_height / 2 + SCREEN_HEIGHT / 2;
	if (rc->wall_top < 0 || rc->wall_top > SCREEN_HEIGHT)
		rc->wall_top = 0;
	rc->wall_bottom = rc->wall_height / 2 + SCREEN_HEIGHT / 2;
	if (rc->wall_bottom >= SCREEN_HEIGHT || rc->wall_bottom < 0)
		rc->wall_bottom = SCREEN_HEIGHT - 1;
	return ;
}
