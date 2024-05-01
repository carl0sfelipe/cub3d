#include "../inc/cub3d.h"

void	set_wall_pixel_x(t_raycaster *rc, t_data *data)
{
	if (rc->side == 0)
		rc->wall_x = data->pos_y + rc->perp_wall_dist * rc->ray_dir_y;
	else
		rc->wall_x = data->pos_x + rc->perp_wall_dist * rc->ray_dir_x;
	rc->wall_x -= floor((rc->wall_x));
	return ;
}
