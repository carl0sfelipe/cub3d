#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && (i + ft_strlen(needle)) <= len)
	{
		if (ft_strncmp((haystack + i), needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
