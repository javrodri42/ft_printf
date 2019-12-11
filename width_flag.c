/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:56:56 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/11 09:28:39 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	width_flag(const char *format, t_struct *flags)
{
	flags->aux = 0;
	flags->width = 0;
	flags->flag_width = 0;
	while (format[flags->i] == '*' || ft_isdigit(format[flags->i]))
	{
		if (format[flags->i] == '*')
		{
			flags->aux = va_arg(flags->ap, int);							
			flags->flag_minus = flags->aux < 0 ? 1 : flags->flag_minus;
			flags->width = flags->aux < 0 ? -(flags->aux) : flags->aux;
			flags->flag_width = 1;
			flags->i++;
		}
		else
		{
			flags->flag_width = 1;
			flags->width = 0;
			while (ft_isdigit(format[flags->i]))
			{
				flags->width = flags->width * 10 + format[flags->i] - 48;
				flags->i++;
			}
		}
	} 
}

/*
**La especificación de ancho nunca provoca el truncamiento de un valor. 
**Si el número de caracteres del valor de salida es mayor que el ancho especificado, 
**o si el argumento width no se proporciona, todos los caracteres del valor son de salida, 
**de acuerdo con la especificación del argumento precision.
*/

