#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = s;
	while (n)
	{
		*temp = 0;
		temp++;
		n--;
	}
}
