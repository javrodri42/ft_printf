/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coment_precision_flags.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:49:57 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/06 20:16:11 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	precision_flags(const char *format, t_struct *flags)
{
	flags->aux = 0;									//
	flags->precision = 0;							// Iniciar a 0 los diferentes flags y el valor de precision.	
	flags->flag_precision = 0;						//
	if (format[flags->i] == '.')					// Localiza el flag de precision
	{
		flags->flag_zero = 0;						//El flag 0 y el de precisión no son compatibles de forma similtanea
		flags->flag_precision = 1;					//si ambos están activados la funcion solo tendrá en cuenta el de precision.
		flags->i++;
		if (format[flags->i] == '*')				//En el caso de encontrar el valor de precision introducido por parametros
		{
			if ((flags->aux = va_arg(flags->ap, int)) >= 0) 	//copia el valor del agumento pasdo por parametro si es mayor o igual a 0
				flags->precision = flags->aux;					//en la variable auxiliar para luego contar usarla.
			flags->i++;
		}
		else if (ft_isdigit(format[flags->i]))
		{
			while (ft_isdigit(format[flags->i]))
			{
				flags->precision = flags->precision * 10 + 		//Misma funcion que en el atoi, trasnforma el numero pasado por argumentos (char)
					format[flags->i] - 48;						//en un entero con el que poder operar.
				flags->i++;				
			}
		}
	}
}

/*
**La especificacion de la precision ouede provocar el truncamiento del valor de salida o el redondeo
**del punto flotante. Si precision se establece en 0 el valor a convertir es 0, el resultado no es
**ninguna salida de caracteres.
*/