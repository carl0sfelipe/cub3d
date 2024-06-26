/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:13:45 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/08 18:13:46 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}	
	return (len);
}

static void	ft_fill_buffer(char *buffer, int n, unsigned int is_negative)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		*(buffer + i) = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (is_negative)
	{
		*(buffer + i) = '-';
		i++;
	}
	*(buffer + i) = '\0';
}

char	*ft_itoa(int n)
{
	char			*buffer;
	size_t			b_len;
	int				is_negative;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	is_negative = 0;
	b_len = 0;
	if (n < 0)
	{
		n *= -1;
		is_negative = 1;
		b_len++;
	}
	b_len += ft_nbrlen(n) + 1;
	buffer = ft_calloc(b_len, sizeof(*buffer));
	ft_fill_buffer(buffer, n, is_negative);
	ft_strrev(buffer);
	return (buffer);
}
