/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:41:40 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:36:48 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string_width(t_struct *flags)
{
	int total;

	flags->j = 0;
	if (flags->count > flags->precision && flags->flag_precision == 1)
		total = flags->width - flags->precision;
	else
		total = flags->width - flags->count;
	if (flags->width < total)
		flags->j = 0;
	else
		while (flags->j < total)
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	if (flags->count == 0)
	{
		while (flags->j < flags->width)
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
}
