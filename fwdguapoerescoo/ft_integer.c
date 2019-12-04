/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 16:27:03 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 00:20:44 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_integer(t_struct *t)
{
	int integer;

	t->count = 0;
	integer = 0;
	integer = va_arg(t->ap, int);
	ft_count_int(t, integer);
	if (t->flag_width)
		ft_flag_width_integer(t, integer);
	if (integer < 0)
		integer = ft_printed_negative(t, integer);
	if (t->flag_zero)
		ft_flag_zero_integer(t);
	if (t->flag_precision)
		ft_flag_precision_integer(t);
	ft_printed_num(t, integer);
	if (t->flag_minus)
		ft_flag_minus_integer(t, integer);
}
