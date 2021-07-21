/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afiat-ar <afiat-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 12:19:29 by afiat-ar          #+#    #+#             */
/*   Updated: 2021/07/21 12:29:03 by afiat-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_eval_zero(t_print *tab, const char *format, int i)
{
	int	num;

	num = 0;
	i++;
	tab->zero = 1;
	while (format[i] == '0')
		i++;
	if (ft_isdigit(format[i]))
	{
		num = ft_atoi(&format[i]);
		i += ft_numlen(num);
	}
	tab->wdt = num;
	return (i);
}

int	ft_eval_minus(t_print *tab, const char *format, int i)
{

}
int	ft_eval_pnt(t_print *tab, const char *format, int i)
{

}