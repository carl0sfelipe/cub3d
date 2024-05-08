/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_wall_data.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:54 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:55 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	calculate_wall_data(t_raycaster *rc)
{
	rc->wall_height = (int)(SCREEN_HEIGHT / rc->perp_wall_dist);
	rc->wall_top = -rc->wall_height / 2 + SCREEN_HEIGHT / 2;
	if (rc->wall_top < 0 || rc->wall_top > SCREEN_HEIGHT)
		rc->wall_top = 0;
	rc->wall_bottom = rc->wall_height / 2 + SCREEN_HEIGHT / 2;
	if (rc->wall_bottom >= SCREEN_HEIGHT || rc->wall_bottom < 0)
		rc->wall_bottom = SCREEN_HEIGHT - 1;
	return ;
}
