/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 10:36:22 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/23 17:18:30 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_hexa_low(t_struct *flags)
{
	unsigned int hexa;
	flags->count = 0;
	hexa = 0;
	hexa = va_arg(flags->ap, unsigned int);
	hexa_countdigits(flags, hexa);
	if (flags->flag_width)
		flag_width_integer(flags, hexa);
	if (hexa < 0)
		hexa = print_negative(flags, hexa);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	if (hexa == 0)
		hexa_zero(flags, hexa);
	print_hexa_low(flags, hexa);
	if (flags->flag_minus)
		flag_minus_integer(flags, hexa);	
}

void	type_hexa_upper(t_struct *flags)
{
	unsigned int hexa;
	flags->count = 0;
	hexa = 0;
	hexa = va_arg(flags->ap, unsigned int);
	hexa_countdigits(flags, hexa);
	if (flags->flag_width)
		flag_width_integer(flags, hexa);
	if (hexa < 0)
		hexa = print_negative(flags, hexa);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	if (hexa == 0)
		hexa_zero(flags, hexa);
	print_hexa_upper(flags, hexa);
	if (flags->flag_minus)
		flag_minus_integer(flags, hexa);	
}

void	print_hexa_low(t_struct *flags, unsigned int hexa)
{
	if (hexa != 0)
	{
		print_hexa_low(flags, hexa / 16);
		if (hexa % 16 >= 10)
		{
			ft_putchar('a' + (hexa % 16 %10));
			flags->len++;
		}
		else
		{
			ft_putchar('0' + hexa % 16);
			flags->len++;
		}		
	}
}

void	print_hexa_upper(t_struct *flags, unsigned int hexa)
{
	if (hexa != 0)
	{
		print_hexa_upper(flags, hexa / 16);
		if (hexa % 16 >= 10)
		{
			ft_putchar('A' + (hexa % 16 %10));
			flags->len++;
		}	
		else
		{
			ft_putchar('0' + hexa % 16);
			flags->len++;
		}			
	}
}

void	hexa_zero(t_struct *flags, unsigned int hexa)
{
	if (hexa == 0 && flags->flag_precision == 0)
	{
		ft_putchar('0');
		flags->len++;
	}
	if (hexa == 0 && flags->flag_precision == 1 && flags->precision != 0)
	{
		ft_putchar('0');
		flags->len++;
	}
}