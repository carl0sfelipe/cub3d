#include "../inc/cub3d.h"

void	set_delta_dist(t_raycaster *rc)
{
	if (rc->ray_dir_x == 0)
		rc->delta_dist_x = INFINITY;
	else
		rc->delta_dist_x = fabs(1 / rc->ray_dir_x);
	if (rc->ray_dir_y == 0)
		rc->delta_dist_y = INFINITY;
	else
		rc->delta_dist_y = fabs(1 / rc->ray_dir_y);
	return ;
}
