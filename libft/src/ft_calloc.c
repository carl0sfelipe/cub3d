
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	buffer = malloc(count * size);
	if (!buffer)
		return (0);
	ft_bzero(buffer, (count * size));
	return (buffer);
}
