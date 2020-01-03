/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 01:36:09 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 16:30:36 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_precision_string(t_struct *flags, char *str)
{
	int aux;

	flags->j = 0;
	aux = flags->precision < flags->count ? flags->precision : flags->count;
	if ((flags->flag_precision == 1) && (flags->precision == 0) && (str == 0))
		flags->j = 0;
	if ((flags->flag_precision == 1) && (flags->precision == 0))
		flags->j = 0;
	else
	{
		while (flags->j < aux)
		{
			write(1, &str[flags->j], 1);
			flags->len++;
			flags->j++;
		}
	}
}
