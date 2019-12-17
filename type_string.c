/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:47:22 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/17 18:08:44 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_string(t_struct *flags)
{
	//printf("Type-string");
	char *str;
	flags->count = 0;
	str = va_arg(flags->ap, char *);
	if (!(str))
		str = "(null)";
	flags->count = ft_strlen(str);
	if (flags->flag_width)
		flag_widht_string(flags, str);
	if (flags->flag_zero)
		flag_zero_integer(flags);
	if (flags->flag_precision)
		flag_precision_string(flags, str);
	//printf("%i", flags->precision);
	print_string(flags, str);	
	if (flags->flag_minus)
		flag_minus_string(flags);	
}