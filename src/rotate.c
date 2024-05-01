#include "../inc/cub3d.h"

void	rotate_left(t_data *data)
{
	double				old_dir_x;
	double				old_plane_x;
	t_dir_vector		dir;
	t_plane_vector		plane;

	dir.x = data->dir_x;
	dir.y = data->dir_y;
	old_dir_x = dir.x;
	data->dir_x = dir.x * cos(ROT_SPEED) - dir.y * sin(ROT_SPEED);
	data->dir_y = old_dir_x * sin(ROT_SPEED) + dir.y * cos(ROT_SPEED);
	plane.x = data->plane_x;
	plane.y = data->plane_y;
	old_plane_x = plane.x;
	data->plane_x = plane.x * cos(ROT_SPEED) - plane.y * sin(ROT_SPEED);
	data->plane_y = old_plane_x * sin(ROT_SPEED) + plane.y * cos(ROT_SPEED);
	return ;
}

void	rotate_right(t_data *data)
{
	double				old_dir_x;
	double				old_plane_x;
	t_dir_vector		dir;
	t_plane_vector		plane;

	dir.x = data->dir_x;
	dir.y = data->dir_y;
	old_dir_x = dir.x;
	data->dir_x = dir.x * cos(-ROT_SPEED) - dir.y * sin(-ROT_SPEED);
	data->dir_y = old_dir_x * sin(-ROT_SPEED) + dir.y * cos(-ROT_SPEED);
	plane.x = data->plane_x;
	plane.y = data->plane_y;
	old_plane_x = plane.x;
	data->plane_x = plane.x * cos(-ROT_SPEED) - plane.y * sin(-ROT_SPEED);
	data->plane_y = old_plane_x * sin(-ROT_SPEED) + plane.y * cos(-ROT_SPEED);
	return ;
}
