/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:47:22 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/02 19:54:48 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_string(t_struct *flags)
{
	char *str;
	flags->count = 0;
	str = va_arg(flags->ap, char *);
	if (!(str))
		str = "(null)";
	flags->count = ft_strlen(str);
	//flags->precision = flags->precision < 0 ? flags->count : flags->precision;
	if (flags->aux < 0)
		flags->precision = flags->count;
	if (flags->flag_width)
		flag_widht_string(flags, str);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_string(flags, str);
	print_string(flags, str);	
	if (flags->flag_minus)
		flag_minus_string(flags);	
}