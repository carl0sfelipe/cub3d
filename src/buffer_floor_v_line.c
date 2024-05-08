/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_floor_v_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:29 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:30 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	buffer_floor_v_line(t_raycaster *rc, t_data *data, t_frame *frame)
{
	int	y;

	y = rc->wall_bottom;
	while (y < SCREEN_HEIGHT)
	{
		frame->buffer[y][rc->screen_x] = data->color_floor;
		y++;
	}
	return ;
}
