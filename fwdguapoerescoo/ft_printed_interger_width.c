/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printed_integer_width.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:01:03 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/02 20:12:19 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printed_integer_width(t_struct *t)
{
	int amount;

	t->j = 0;
	amount = t->width - t->aux;
	while (t->j < amount)
	{
		write(1, " ", 1);
		t->len++;
		t->j++;
	}
}

