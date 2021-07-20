#include "ft_printf.h"

static int	ft_get_tl(int i, char const *format)
{
	int		num;

	num = 0;
	while (ft_isdigit(format[i]))
	{
		num = (num * 10) + (format[i] - '0');
		i++;
	}
	return (num);
}

/*
**	we use it to know if our format contains any flag,
**	if it is correct it increase i value to i + 1
**	and we save the flag in our t_print struct
**/
static int	ft_is_flag(t_print *tab, int i, const char *format)
{
	if (format[i + 1] == '0' || format[i + 1] == '#'
		|| format[i + 1] == ' ' || format[i + 1] == '+')
	{
		i++;
		if (format[i] == '0')
			tab->zero = 1;
		if (format[i] == '#')
			tab->pad = 1;
		if (format[i] == '+')
			tab->sign = 1;
		if (format[i] == ' ')
			tab->sp = 1;
	}
	return (i);
}

static int	ft_analyze_flag(t_print *tab, int i, const char *format)
{
	if (tab->zero == 1 || tab->sp == 1)
	{
		tab->tl = ft_get_tl(i, format);
		if (tab->zero == 1 && tab->sp == 1)
			i = ft_zero_flag_print(tab, i, format);
		else if (tab->zero == 1 && tab->sp == 0)
			i = ft_zero_flag_print(tab, i, format);
		else if (tab->sp == 1)
			i = ft_check_sp_print(tab, i, format);
	}
	if (tab->sign == 1)
		i = ft_check_sign_print(tab, i, format);
	if (tab->pad == 1)
		i = ft_check_pad_print(tab, i, format);
	return (i);
}

/**
**	This method call function ft_is_flag, if this
**	condition is true we call ft_print_with_format
**	and if it is false, we call ft_check_print_type
**	to print simple type
**/
int	ft_check_flags(t_print *tab, int i, const char *format)
{
	while (!(ft_isalpha(format[i]) || format[i] == '%'))
	{
		//i = ft_is_flag(tab, i, format);
		i++;
	}
	i = ft_check_print_type(tab, i, format);
	ft_reset_struct(tab);
	return (i);
}