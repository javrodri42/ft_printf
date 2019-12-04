/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printed_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:48:09 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 18:43:48 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printed_num(t_struct *t, int integer)
{
	char	*str;

	t->j = 0;
	if ((t->flag_precision == 1) && (t->precision == 0) && (integer == 0))
		t->j = 0;
	else
	{
		str = ft_itoa(integer);
		while (str[t->j] != '\0')
		{
			write(1, &str[t->j], 1);
			t->len++;
			t->j++;
		}
		free(str);
		str = NULL;
	}
}
