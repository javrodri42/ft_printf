/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:33:26 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 16:26:51 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_integer(t_struct *flags, int integer)
{
	flags->j = 0;
	if (flags->flag_precision && flags->precision > flags->count)
	{
		if (flags->flag_integer_negative)
			flags->precision += 1;
		while (flags->j < (flags->width - flags->precision))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
	else
	{
		if (integer == 0 && flags->precision == 0 && flags->flag_precision)
			flags->count = 0;
		while (flags->j < (flags->width - flags->count))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}
