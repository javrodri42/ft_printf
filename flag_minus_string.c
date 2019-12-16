/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 00:34:04 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/16 13:10:21 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_string(t_struct *flags)
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
		while (flags->j < (flags->width - flags->count))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}
