/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_zero_interger.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:03:53 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 16:06:59 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_flag_zero_integer(t_struct *t)
{
	t->j = 0;
	if ((t->flag_width) && (t->width > t->count))
	{
		while (t->j < (t->width - t->count))
		{
			write(1, "0", 1);
			t->len++;
			t->j++;
		}
	}
}
