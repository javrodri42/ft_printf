/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:09:15 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/02 21:01:38 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
