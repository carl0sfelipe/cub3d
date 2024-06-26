/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_wall_vertical_line.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:34 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:35 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	buffer_wall_v_line(t_raycaster *rc, t_data *data, t_frame *frame)
{
	double	step;
	double	tex_pos;
	int		y;
	int		offset;

	step = 1.0 * data->tex_height / rc->wall_height;
	tex_pos = (rc->wall_top - SCREEN_HEIGHT / 2 + rc->wall_height / 2) * step;
	y = rc->wall_top;
	while (y < rc->wall_bottom)
	{
		rc->tex.y = (int)tex_pos & (data->tex_height - 1);
		tex_pos += step;
		offset = rc->tex.x * (frame->wall_tex.bits_per_pixel / 8)
			+ (rc->tex.y * frame->wall_tex.line_length);
		rc->tex.pixel = *(uint32_t *)(frame->wall_tex.addr + offset);
		if (rc->side == 0)
			rc->tex.pixel = (rc->tex.pixel >> 1) & 8355711;
		frame->buffer[y][rc->screen_x] = rc->tex.pixel;
		y++;
	}
	return ;
}
