/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coment_minus_zero_flags.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:41:20 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/05 12:56:03 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_zero_flag(const char *format, t_struct *flags)
{
	flags->flag_minus = 0;
	flags->flag_zero = 0;
	while (format[flags->i] == '0' || format[flags->i] == '-')
	{
		if (format[flags->i] == '-')
			flags->flag_minus = 1;
		if (format[flags->i] == '0')
			flags->flag_zero = 1;
		if (flags->flag_minus == '1')
			flags->flag_zero = 0;
		flags->i++;
	}
}

/*
** Esta funcion valora los flags 0 y -
** En el caso de que encontremos los dos flags la funcion printf ignora el 0 y solo aplica el -
*/