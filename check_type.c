/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:11:51 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 16:26:21 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(const char *format, t_struct *flags)
{
	if (format[flags->i] == 'd' || format[flags->i] == 'i')
		type_integer(flags);
	if (format[flags->i] == 's')
		type_string(flags);
	if (format[flags->i] == 'c')
		type_char(flags);
	if (format[flags->i] == 'u')
		type_unsigned_int(flags);
	if (format[flags->i] == 'x')
		type_hexa_low(flags);
	if (format[flags->i] == 'X')
		type_hexa_upper(flags);
	if (format[flags->i] == '%')
		type_percent(flags);
	if (format[flags->i] == 'p')
		type_pointer(flags);
}
