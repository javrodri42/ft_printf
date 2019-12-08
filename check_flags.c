/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:09:15 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/05 09:37:29 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	initialize_flags(t_struct *flags)
{
	flags->i = 0;
	flags->j = 0;
	flags->len = 0;
	flags->aux = 0;
	flags->count = 0;
	flags->flag_minus = 0;
	flags->flag_zero = 0;
	flags->flag_width = 0;
	flags->width = 0;
	flags->flag_precision = 0;
	flags->precision = 0;
	flags->flag_integer_negative = 0;		
}

void	check_flags(const char *format, t_struct *flags)
{
	while (format[flags->i])					
	{
		if (format[flags->i] == '%')			
		{
			flags->i++;
			if (ft_strchr("*.-0123456789", format[flags->i]))		
				parse_flags(format, flags);							
			if (ft_strchr("cspdiuxX%", format[flags->i]))			
				check_type(format, flags);
		}
		else
		{
			write(1, &format[flags->i], 1);
			flags->len++;
		}
		flags->i++;		
	}
}

void	parse_flags(const char *format, t_struct *flags)
{
	minus_zero_flag(format, flags);
	width_flag(format, flags);
	precision_flags(format, flags);
}