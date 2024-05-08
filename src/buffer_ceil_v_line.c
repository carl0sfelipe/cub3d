/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_ceil_v_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:25 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:26 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	buffer_ceil_v_line(t_raycaster *rc, t_data *data, t_frame *frame)
{
	int	y;

	y = 0;
	while (y < rc->wall_top)
	{
		frame->buffer[y][rc->screen_x] = data->color_ceil;
		y++;
	}
	return ;
}
