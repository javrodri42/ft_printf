/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:21:27 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:45:44 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_integer(t_struct *flags)
{
	int integer;

	flags->count = 0;
	integer = 0;
	integer = va_arg(flags->ap, int);
	int_counter(flags, integer);
	if (flags->flag_minus && flags->flag_zero && flags->flag_width)
		flags->flag_zero = 0;
	if (flags->aux < 0)
		flags->flag_precision = 0;
	if (flags->flag_width)
		flag_width_integer(flags, integer);
	if ((integer < 0))
		integer = print_negative(flags, integer);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	number_print(flags, integer);
	if (flags->flag_minus)
		flag_minus_integer(flags, integer);
}
