/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_player_direction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:22:11 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:12 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

static void	handle_so(t_data *data)
{
	data->dir_x = 1;
	data->dir_y = 0;
	data->plane_x = 0;
	data->plane_y = -0.66;
	return ;
}

static void	handle_no(t_data *data)
{
	data->dir_x = -1;
	data->dir_y = 0;
	data->plane_x = 0;
	data->plane_y = 0.66;
	return ;
}

static void	handle_ea(t_data *data)
{
	data->dir_x = 0;
	data->dir_y = 1;
	data->plane_x = 0.66;
	data->plane_y = 0;
	return ;
}

static void	handle_we(t_data *data)
{
	data->dir_x = 0;
	data->dir_y = -1;
	data->plane_x = -0.66;
	data->plane_y = 0;
	return ;
}

void	set_player_direction(t_data *data)
{
	if (data->spawn_orientation == 'N')
		handle_no(data);
	else if (data->spawn_orientation == 'S')
		handle_so(data);
	else if (data->spawn_orientation == 'E')
		handle_ea(data);
	else if (data->spawn_orientation == 'W')
		handle_we(data);
	return ;
}
