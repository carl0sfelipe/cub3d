/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:58:33 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 17:58:35 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPS_H
# define MAPS_H

typedef struct s_map
{
	int		fd;
	int		window_height;
	int		window_width;
	int		map_start;
	char	*path_no;
	char	*path_so;
	char	*path_we;
	char	*path_ea;
	char	**world_map;
	char	*floor;
	char	*ciel;
	int		pos_x;
	int		pos_y;
	char	direction;
	int		sign;
	int		valid;
	int		i;
	int		j;
	int		length;
	char	**map_copy;
	int		a;
}	t_map;

typedef struct s_wl
{
	char	*ret;
	char	*joker;
	int		begin;
	int		end;
	char	*temp;
	int		i;
	int		j;
}	t_wl;

#endif
