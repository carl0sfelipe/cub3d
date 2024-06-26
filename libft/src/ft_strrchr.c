/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:16:01 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:16:02 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	offset;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		offset = len - i;
		if (*(s + offset) == (unsigned char)c)
			return ((char *)(s + offset));
		i++;
	}
	return (0);
}
