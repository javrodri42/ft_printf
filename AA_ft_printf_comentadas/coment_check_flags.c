/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coment_check_flags.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:09:15 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/05 10:10:32 by javrodri         ###   ########.fr       */
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

/*
** Esta funcion solo va a comprobar la existenciia de flags, no va a comrpobar el
** tipo de flags o el tipo de variable que vamos a imrpimir.
*/

void	check_flags(const char *format, t_struct *flags)
{
	while (format[flags->i])					//i va avanzando por la cadena *format
	{
		if (format[flags->i] == '%')			//si encuentra un %
		{
			flags->i++;
			if (ft_strchr("*.-0123456789", format[flags->i]))		//si localiza uno de los flags
				parse_flags(format, flags);							//comprueba que flags debe activar
			if (ft_strchr("cspdiuxX%", format[flags->i]))			//comprueba si existe el tipo de dato que vamos a imprimir
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

/*
**Funcion que va a comprobar los distintos flags
*/

void	parse_flags(const char *format, t_struct *flags)
{
	minus_zero_flag(format, flags); //El flag - y 0 pueden interferir mutuamente, por ello los ponemos en la misma funcion, para facilitar.
	width_flag(format, flags);		//Flag width.  Tamaño del ancho del campo donde se imprimirá el valor. 	
	precision_flags(format, flags); //Precision.  Tamaño de la parte decimal para números reales. Número de caracteres a imprimir para cadenas de texto  
}