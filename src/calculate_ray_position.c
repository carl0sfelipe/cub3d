/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_ray_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:44 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:44 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	calculate_ray_position(t_raycaster *rc)
{
	rc->camera_x = 2 * rc->screen_x / (double)(SCREEN_WIDTH) - 1;
	return ;
}
