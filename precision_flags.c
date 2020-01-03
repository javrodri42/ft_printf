/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:49:57 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:35:11 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	precision_flags(const char *format, t_struct *flags)
{
	flags->aux = 0;
	flags->precision = 0;
	flags->flag_precision = 0;
	if (format[flags->i] == '.')
	{
		flags->flag_zero = 0;
		flags->flag_precision = 1;
		flags->i++;
		flags->aux = flags->count;
		if (format[flags->i] == '*')
		{
			if ((flags->aux = va_arg(flags->ap, int)) >= 0)
				flags->precision = flags->aux;
			flags->i++;
		}
		else if (ft_isdigit(format[flags->i]))
		{
			while (ft_isdigit(format[flags->i]))
			{
				flags->precision = flags->precision * 10 +
					format[flags->i] - 48;
				flags->i++;
			}
		}
	}
}
