/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_texture_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:22:18 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:19 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	set_texture_x(t_raycaster *rc, t_data *data)
{
	rc->tex.x = (int)(rc->wall_x * (double)(data->tex_width));
	if (rc->side == 0 && rc->ray_dir_x > 0)
		rc->tex.x = data->tex_width - rc->tex.x - 1;
	if (rc->side == 1 && rc->ray_dir_y < 0)
		rc->tex.x = data->tex_width - rc->tex.x - 1;
	return ;
}
