/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_precision_integer.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:04:44 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 18:26:08 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_flag_precision_integer(t_struct *t)
{
	int pollas;

	pollas = t->count;
	t->j = 0;
	if (t->flag_integer_negative)
		pollas -= 1;
	if (t->precision > pollas)
	{
		while (t->j < (t->precision - pollas))
		{
			write(1, "0", 1);
			t->len++;
			t->j++;
		}
	}
}
