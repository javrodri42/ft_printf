/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coment_ft_printf_.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 08:30:26 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/04 19:32:53 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	t_struct	*flags;

	if (!(flags = (t_struct*)malloc(sizeof(t_struct))))		//Reserva memoria para la struct
		return (-1);										
	ft_initialize_flags(flags);								//Inicializa todas las variables de la struct a 0
	if (format == NULL)
		return (-1);
	va_start(flags->ap, format);							//Inicio de la lista
	if (ft_strchr(format, '%'))								//Busqueda de simbolos%, si lo encuentra se inicia la funcion para identificar los flags y rellenar la struct.
		(check_flags(format, flags));						//Identifica los flags y rellena la struct.
	else
	{
		ft_putstr_fd((char *)format, 1);					//En caso de no encontrar % devuelve la string introducida por parametros.
		flags->len = ft_strlen(format);
	}
	va_end(flags->ap);										//Fin de la lista.
	return (flags->len);
}
