#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t'
		||c == '\n'
		||c == '\v'
		||c == '\f'
		||c == '\r'
		||c == ' ');
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;

	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*(str) - '0');
		str++;
	}
	if (sign == 1)
		result *= -1;
	return (result);
}
