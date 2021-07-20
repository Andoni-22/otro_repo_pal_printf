#include "ft_printf.h"

void	ft_putchar_tab(t_print *tab)
{
	char	a;

	a = va_arg(tab->args, int);
	tab->tl += write(1, &a, 1);
}