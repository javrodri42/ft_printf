/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_integer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:00:29 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/10 09:15:31 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_precision_integer(t_struct *flags)
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