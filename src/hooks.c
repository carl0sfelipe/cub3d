/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:21:22 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:21:23 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

static void	handle_exit(t_data *data)
{
	free_main(data);
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
}

static int	handle_destroy(t_data *data)
{
	handle_exit(data);
	return (0);
}

static int	handle_keydown(int keycode, t_data *data)
{
	if (keycode == W)
		move_forward(data);
	if (keycode == S)
		move_backwards(data);
	if (keycode == A)
		move_left(data);
	if (keycode == D)
		move_right(data);
	if (keycode == LEFT_ARROW)
		rotate_left(data);
	if (keycode == RIGHT_ARROW)
		rotate_right(data);
	if (keycode == ESC)
		handle_exit(data);
	return (0);
}

void	set_hooks(t_data *data)
{
	mlx_hook(data->win, ON_KEYDOWN, 1L << 0, handle_keydown, data);
	mlx_hook(data->win, ON_DESTROY, 1L << 2, handle_destroy, data);
}
