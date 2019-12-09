/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:54:37 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/09 20:03:42 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_width_integer(t_struct *flags, int integer)
{
	flags->j = 0;
	if (flags->flag_minus == 0 && flags->flag_zero == 0)
	{
		if (flags->precision)
		{
			if (integer == 0 && flags->precision == 0)
				flags->count = 0;
			if ((flags->aux) < flags->width)
				integer_width_print(flags);	
		}
		else
			while (flags->j < (flags->width - flags->count))
			{
				write(1, " ", 1);
				flags->len++;
				flags->j++;
			}
	}
}
