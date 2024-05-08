/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_ray_direction.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:40 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:41 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	calculate_ray_direction(t_raycaster *rc, t_data *data)
{
	rc->ray_dir_x = data->dir_x + data->plane_x * rc->camera_x;
	rc->ray_dir_y = data->dir_y + data->plane_y * rc->camera_x;
	return ;
}
