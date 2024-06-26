/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:21:17 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:21:17 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h" 

void	free_main(t_data *data)
{
	if (data->map.path_no != NULL)
		free(data->map.path_no);
	if (data->map.path_so != NULL)
		free(data->map.path_so);
	if (data->map.path_we != NULL)
		free(data->map.path_we);
	if (data->map.path_ea != NULL)
		free(data->map.path_ea);
	if (data->map.floor != NULL)
		free(data->map.floor);
	if (data->map.ciel != NULL)
		free(data->map.ciel);
	if (data->map.world_map != NULL)
		free_matrix(&data->map);
	if (data->map.map_copy != NULL)
		free_copy(&data->map);
}

void	free_copy(t_map *map)
{
	int	i;

	i = -1;
	while (++i < map->window_height - map->map_start)
		free(map->map_copy[i]);
	free(map->map_copy);
}

void	free_matrix(t_map *map)
{
	int	i;

	i = map->map_start;
	while (map->world_map[i])
	{
		free(map->world_map[i]);
		i++;
	}
	free(map->world_map);
}
