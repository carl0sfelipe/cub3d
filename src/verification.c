/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:22:37 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:37 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

int	validate_cub(char *map_name)
{
	int		a;
	int		b;
	int		x;
	char	*haystack;

	a = 4;
	x = 0;
	if (ft_strlen(map_name) < 5)
		return (0);
	b = ft_strlen(map_name) - 4;
	haystack = malloc(5 * sizeof(char));
	if (!haystack)
		return (0);
	while (a > 0)
	{
		haystack[x] = map_name[b];
		x++;
		b++;
		a--;
	}
	haystack[x] = '\0';
	if (ft_is_cub(haystack) == 1)
		return (1);
	else
		return (0);
}

int	verification_main(char **argv, int argc, t_data *data)
{
	if (argc != 2)
	{
		ft_printf("Wrong input :/\nUsage: ./cub3d path_to_.cub\n");
		return (0);
	}
	if (validate_cub(argv[1]) == 0)
	{
		ft_printf("Not a .cub :/\n");
		return (0);
	}
	data->map.fd = open(argv[1], O_RDONLY);
	if (data->map.fd > 0)
		create_map(data);
	else
	{
		ft_printf("Map and textures instruction were not found\n");
		return (0);
	}
	if (validate_main(&data->map) == 0)
		return (0);
	if (empty_textures(&data->map) == 1)
		return (0);
	return (1);
}

int	empty_textures(t_map *map)
{
	if (map->direction == '\0' || map->path_no == NULL
		|| map->path_so == NULL || map->path_we == NULL
		|| map->path_ea == NULL || map->floor == NULL || map->ciel == NULL)
	{
		printf("Missing textures\n");
		return (1);
	}
	return (0);
}

int	wall_spaces(t_map *map)
{
	map->i = 0;
	map->length = 0;
	map->map_copy = malloc(sizeof(char *) * map->window_height);
	map->i = -1;
	map->a = 0;
	while (map->i++ < map->window_height - map->map_start - 1)
		map->map_copy[map->i] = malloc(sizeof(char *)
				* (map->window_width + 1));
	map->i = map->map_start;
	while (map->i < map->window_height)
	{
		map->j = 0;
		while (map->j < map->window_width)
		{
			if (map->world_map[map->i][map->j] != '\0')
				map->map_copy[map->a][map->j] = map->world_map[map->i][map->j];
			else
				map->map_copy[map->a][map->j] = 'k';
			map->j++;
		}
		map->map_copy[map->a][map->j] = '\0';
		map->i++;
		map->a++;
	}
	return (1);
}

int	check_above(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->window_height - map->map_start - 1)
	{
		j = 0;
		while (map->map_copy[i][j])
		{
			if (map->map_copy[i][j] == '0')
			{
				if (map->map_copy[i - 1][j] == 'k'
					|| map->map_copy [i][j + 1] == 'k'
					|| map->map_copy[i][j - 1] == 'k')
					return (0);
			}
			j++;
		}
		i++;
	}
	i = 0;
	return (1);
}
