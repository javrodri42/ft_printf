/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 08:30:26 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/02 21:04:36 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	t_struct	*flags;

	if (!(flags = (t_struct *)malloc(sizeof(t_struct))))
		return (0);
	initialize_flags(flags);
	if (format == NULL)
		return (-1);
	va_start(flags->ap, format);
	if (ft_strchr(format, '%'))
		(check_flags(format, flags));
	else
	{
		ft_putstr_fd((char *)format, 1);
		flags->len = ft_strlen(format);
	}
	/*
	printf("\n");
	printf("-------------");
	printf("\nwidth:%i", flags->width);
	printf("\nprecision:%i", flags->precision);
	printf("\ncount:%i", flags->count);
	printf("\naux:%i", flags->aux);
	printf("\nflag_precision:%i", flags->flag_precision);
	printf("\nflag_width:%i", flags->flag_width);
	printf("\nflag_minus:%i", flags->flag_minus);
	printf("\nflag_zero:%i", flags->flag_zero);
	printf("\nlen:%i", flags->len);
	printf("\n");
	printf("\n");
	printf("|------------|");
	printf("\n");
	//printf("%d", flags->ap);
	//printf\n");	
	*/
	va_end(flags->ap);
	return (flags->len);
}
