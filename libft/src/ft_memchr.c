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
