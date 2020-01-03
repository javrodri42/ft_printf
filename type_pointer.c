/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 17:38:45 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:50:13 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_pointer(t_struct *flags)
{
	unsigned long hexa;

	flags->count = 0;
	hexa = 0;
	hexa = va_arg(flags->ap, unsigned long);
	pointer_countdigits(flags, hexa);
	if (flags->flag_width)
		flag_width_pointer(flags, hexa);
	write(1, "0x", 2);
	flags->len = flags->len + 2;
	if (hexa < 0)
		hexa = print_negative(flags, hexa);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_pointer(flags);
	if (hexa == 0)
		hexa_zero(flags, hexa);
	print_pointer(flags, hexa);
	if (flags->flag_minus)
		flag_minus_pointer(flags, hexa);
}

void	print_pointer(t_struct *flags, unsigned long hexa)
{
	if (hexa != 0)
	{
		print_pointer(flags, hexa / 16);
		if (hexa % 16 >= 10)
		{
			ft_putchar('a' + (hexa % 16 % 10));
			flags->len++;
		}
		else
		{
			ft_putchar('0' + hexa % 16);
			flags->len++;
		}
	}
}
