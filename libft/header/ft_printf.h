#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
char	*ft_ulltoa(unsigned long n, int base);
size_t	ft_nbrlen_base(unsigned long long n, int base);
char	*ft_handle_prefix(va_list p_arg, char *prefix);
void	ft_xtoupper(char *str);
#endif
