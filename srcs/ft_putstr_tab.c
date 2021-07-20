#include "ft_printf.h"

void	ft_putstr_tab(t_print *tab)
{
	char	*s;
	int		i;
	int		len;

	i = 0;
	len = 0;
	s = va_arg(tab->args, char *);
	if (!s)
		s = "(null)";
	while (s[i])
		tab->tl += write(1, &s[i++], 1);
}