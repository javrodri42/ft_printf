/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_pointer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:53:04 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 16:29:00 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_precision_pointer(t_struct *flags)
{
	int aux;

	aux = flags->count;
	flags->j = 0;
	if (flags->flag_integer_negative)
		aux -= 1;
	if (flags->precision >aux)
	{
		while (flags->j < (flags->precision - aux))
		{
			write(1, "0", 1);
			flags->len++;
			flags->j++;
		}
	}
}
