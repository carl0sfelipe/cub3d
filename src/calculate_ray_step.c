/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_ray_step.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:20:48 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:20:49 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	calculate_ray_step(t_raycaster *rc)
{
	if (rc->ray_dir_x < 0)
		rc->step_x = -1;
	else
		rc->step_x = 1;
	if (rc->ray_dir_y < 0)
		rc->step_y = -1;
	else
		rc->step_y = 1;
	return ;
}
