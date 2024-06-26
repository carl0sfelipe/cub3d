/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:14:22 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:14:22 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*temp_s;
	unsigned int		i;

	temp_s = s;
	i = 0;
	while (i < n)
	{
		if (*(temp_s + i) == (unsigned char)c)
			return ((char *)(temp_s + i));
		i++;
	}
	return (0);
}
