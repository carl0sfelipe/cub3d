/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:57:44 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 17:57:46 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAME_H
# define FRAME_H

# include "img.h"

typedef struct s_frame
{
	t_img		img;
	t_img		wall_tex;
	uint32_t	buffer[SCREEN_HEIGHT][SCREEN_WIDTH];
}				t_frame;
#endif
