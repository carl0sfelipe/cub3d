/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycaster_loop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:21:54 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:21:55 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	raycaster_loop(t_raycaster *rc, t_data *data, t_frame *frame)
{
	rc->screen_x = 0;
	while (rc->screen_x < SCREEN_WIDTH)
	{
		calculate_ray_position(rc);
		calculate_ray_direction(rc, data);
		rc->map_x = (int)data->pos_x;
		rc->map_y = (int)data->pos_y;
		set_delta_dist(rc);
		calculate_ray_step(rc);
		calculate_side_dist(rc, data);
		dda_loop(rc, data);
		set_wall_texture(rc, data, frame);
		calculate_camera_dist(rc);
		calculate_wall_data(rc);
		set_wall_pixel_x(rc, data);
		buffer_ceil_v_line(rc, data, frame);
		buffer_floor_v_line(rc, data, frame);
		set_texture_x(rc, data);
		buffer_wall_v_line(rc, data, frame);
		rc->screen_x++;
	}
	return ;
}
