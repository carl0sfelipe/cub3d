/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_next_frame.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:21:57 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:21:57 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

int	render_next_frame(t_data *data)
{
	t_raycaster	rc;
	t_frame		frame;

	frame.img.img = mlx_new_image(data->mlx, SCREEN_WIDTH, SCREEN_HEIGHT);
	set_image_data(&frame.img);
	raycaster_loop(&rc, data, &frame);
	draw_next_frame(&frame.img, frame.buffer);
	clear_frame_buffer(&frame);
	mlx_put_image_to_window(data->mlx, data->win, frame.img.img, 0, 0);
	mlx_destroy_image(data->mlx, frame.img.img);
	return (0);
}
