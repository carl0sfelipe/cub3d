#include "../inc/cub3d.h"

void	set_wall_texture(t_raycaster *rc, t_data *data, t_frame *frame)
{
	if (rc->side == 0)
	{
		if (rc->map_x > data->pos_x)
			frame->wall_tex = data->tex_so;
		else
			frame->wall_tex = data->tex_no;
	}
	else
	{
		if (rc->map_y > data->pos_y)
			frame->wall_tex = data->tex_ea;
		else
			frame->wall_tex = data->tex_we;
	}
	return ;
}
