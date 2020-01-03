/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:14:21 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:40:46 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_char(t_struct *flags)
{
	char c;

	flags->j = 0;
	c = (char)va_arg(flags->ap, int);
	if ((flags->flag_width == 1) && (flags->flag_minus == 0))
	{
		while (flags->j < (flags->width - 1))
		{
			flags->len += write(1, " ", 1);
			flags->j++;
		}
	}
	flags->len += write(1, &c, 1);
	if (flags->flag_minus == 1)
	{
		while (flags->j < (flags->width - 1))
		{
			flags->len += write(1, " ", 1);
			flags->j++;
		}
	}
}
