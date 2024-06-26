/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_textures.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:21:40 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:21:40 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

static void	load_texture_no(t_data *data)
{
	data->tex_no.img = mlx_xpm_file_to_image
		(
			data->mlx,
			data->map.path_no,
			&data->tex_width,
			&data->tex_height
			);
	set_image_data(&data->tex_no);
	return ;
}

static void	load_texture_so(t_data *data)
{
	data->tex_so.img = mlx_xpm_file_to_image
		(
			data->mlx,
			data->map.path_so,
			&data->tex_width,
			&data->tex_height
			);
	set_image_data(&data->tex_so);
	return ;
}

static void	load_texture_we(t_data *data)
{
	data->tex_we.img = mlx_xpm_file_to_image
		(
			data->mlx,
			data->map.path_we,
			&data->tex_width,
			&data->tex_height
			);
	set_image_data(&data->tex_we);
	return ;
}

static void	load_texture_ea(t_data *data)
{
	data->tex_ea.img = mlx_xpm_file_to_image
		(
			data->mlx,
			data->map.path_ea,
			&data->tex_width,
			&data->tex_height
			);
	set_image_data(&data->tex_ea);
	return ;
}

void	load_textures(t_data *data)
{
	load_texture_no(data);
	load_texture_so(data);
	load_texture_we(data);
	load_texture_ea(data);
	return ;
}
