/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_width_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 11:41:08 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 16:36:02 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_widht_string(t_struct *flags, char *format)
{
	flags->j = 0;
	if (flags->flag_minus == 0 && flags->flag_zero == 0)
	{
		if (format == 0 && flags->precision == 0)
			flags->count = 0;
		flags->aux = flags->precision >
		flags->count ? flags->precision : flags->count;
		if ((flags->flag_integer_negative) && (flags->count < flags->precision))
			flags->aux += 1;
		if ((flags->aux) < (flags->width))
			print_string_width(flags);
		if (flags->width < flags->count)
			print_string_width(flags);
		else
			while (flags->j < (flags->width - flags->count))
			{
				write(1, " ", 1);
				flags->len++;
				flags->j++;
			}
	}
}
