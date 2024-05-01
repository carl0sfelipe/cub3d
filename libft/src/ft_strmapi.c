#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	unsigned int	i;

	buffer = ft_calloc(ft_strlen(s) + 1, sizeof(*s));
	if (!buffer)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(buffer + i) = (*f)(i, *(s + i));
		i++;
	}
	*(buffer + i) = '\0';
	return (buffer);
}
