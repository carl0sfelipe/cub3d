/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_player_position.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:22:14 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:15 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

static int	is_player(int c)
{
	return (c == 'N'
		|| c == 'S'
		|| c == 'E'
		|| c == 'W');
}

void	set_player_position(t_data *data)
{
	t_map	map;
	int		x;
	int		y;

	map = data->map;
	x = map.map_start;
	y = 0;
	while (map.world_map[x])
	{
		y = 0;
		while (map.world_map[x][y] && !is_player(map.world_map[x][y]))
			y++;
		if (is_player(map.world_map[x][y]))
			break ;
		x++;
	}
	data->pos_x = (float)x;
	data->pos_y = (float)y;
	data->spawn_orientation = map.world_map[x][y];
	return ;
}
