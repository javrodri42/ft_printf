/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_unsigned_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 10:41:34 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/20 11:26:17 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_unsigned_int(t_struct *flags)
{
	unsigned int integer;
	flags->count = 0;
	integer = 0;
	integer = va_arg(flags->ap, unsigned int);
	int_counter_unsigned(flags, integer);
	if (flags->flag_width)
		flag_width_integer(flags, integer);
	if (integer < 0)
		integer = print_negative(flags, integer);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	print_unsigned(flags, integer);
	if (flags->flag_minus)
		flag_minus_integer(flags, integer);	
}

void	int_counter_unsigned(t_struct *flags, unsigned int integer)
{
	char	*str;

	flags->flag_integer_negative =  0;
	str = ft_itoa_unsigned(integer);
	flags->count = ft_strlen(str);
	if (integer < 0)
		flags->flag_integer_negative = 1;		
}