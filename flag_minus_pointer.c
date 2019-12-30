/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 19:38:54 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/30 19:39:01 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_pointer(t_struct *flags, int integer)
{
	flags->j = 0;
	if (flags->flag_precision && flags->precision > flags->count)
	{
		if ( flags->flag_integer_negative)
			flags->precision += 1;
		while (flags->j < (flags->width - flags->precision))
		{
			write(1," ", 1);
			flags->len++;
			flags->j++;
		}
	}
	else
	{
		if (integer == 0 && flags->precision == 0 && flags->flag_precision)
			flags->count = 0;
		while (flags->j < (flags->width - flags->count - 2))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}