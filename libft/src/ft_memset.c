#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*temp;

	temp = b;
	while (len)
	{
		*temp = (char)c;
		temp++;
		len--;
	}
	return (b);
}
