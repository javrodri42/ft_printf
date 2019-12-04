/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_width_integer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:03:11 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 18:52:15 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_flag_width_integer(t_struct *t, int integer)
{
	t->j = 0;
	if ((t->flag_zero == 0) && (t->flag_minus == 0))
	{
		if (t->flag_precision)
		{
			if (integer == 0 && t->precision == 0)
				t->count = 0;
			t->aux = t->precision > t->count ? t->precision : t->count;
			if ((t->flag_integer_negative) && (t->count < t->precision))
				t->aux += 1;
			if ((t->aux) < t->width)
				ft_printed_integer_width(t);
		}
		else
			while (t->j < (t->width - t->count))
			{
				write(1, " ", 1);
				t->len++;
				t->j++;
			}
	}
}
