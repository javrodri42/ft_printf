/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_minus_integer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:05:24 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 18:59:58 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_flag_minus_integer(t_struct *t, int integer)
{
	t->j = 0;
	if (t->flag_precision && t->precision > t->count)
	{
		if (t->flag_integer_negative)
			t->precision += 1;
		while (t->j < (t->width - t->precision))
		{
			write(1, " ", 1);
			t->len++;
			t->j++;
		}
	}
	else
	{
		if (integer == 0 && t->precision == 0 && t->flag_precision)
			t->count = 0;
		while (t->j < (t->width - t->count))
		{
			write(1, " ", 1);
			t->len++;
			t->j++;
		}
	}
}
