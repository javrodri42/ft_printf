/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_minus_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 16:33:34 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/02 16:34:27 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_minus_percent(t_struct *flags)
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
		while (flags->j < (flags->width - flags->count))
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}
