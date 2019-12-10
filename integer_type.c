/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:21:27 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/10 18:26:12 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	integer_type(t_struct *flags)
{
	int integer;
	//printf("flag1");
	flags->count = 0;
	integer = 0;
	integer = va_arg(flags->ap, int);
	int_counter(flags, integer);
	if (flags->flag_width)
		flag_width_integer(flags, integer);
	if (integer < 0)
		integer = print_negative(flags, integer);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_integer(flags);
	number_print(flags, integer);
	if (flags->flag_minus)
		flag_minus_integer(flags, integer);	
}
