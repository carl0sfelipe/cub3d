/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_image_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:22:07 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:07 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	set_image_data(t_img *img)
{
	img->addr = mlx_get_data_addr
		(
			img->img,
			&img->bits_per_pixel,
			&img->line_length,
			&img->endian
			);
	return ;
}
