/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:54:35 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/16 19:13:26 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(t_struct *flags, char *str)
{
	//int aux;
	flags->j = 0;
	if ((flags->flag_precision == 1) && (flags->precision == 0) && (str == 0))
		flags->j = 0;
	if ((flags->flag_precision == 1) && (flags->precision == 0))
		flags->j = 0;
	if ((flags->flag_width == 1) && (flags->width == 0))
	{
		while (str[flags->j] != '\0' )
		{
			flags->len += write(1, &str[flags->j], 1);
			flags->j++;
		}
	}
	if ((flags->flag_precision) && (flags->j = 0))
	{
		while (flags->j <= flags->count)
		{
			flags->len += write(1, &str[flags->j], 1);
			flags->j++;
		}
				
	}
	else
	{
		while (str[flags->j] != '\0' )
		{
			flags->len += write(1, &str[flags->j], 1);
			flags->j++;
		}
	}
	printf("\nlen:%i\ncount:%i\n", flags->len, flags->count);
}