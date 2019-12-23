/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 17:23:05 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/23 18:20:46 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_percent(t_struct *flags)
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
	ft_putchar('%');
        flags->len++;
	if (flags->flag_minus)
		flag_minus_integer(flags, hexa);	
}

