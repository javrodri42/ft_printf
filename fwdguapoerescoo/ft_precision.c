/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:14:38 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 15:59:35 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_precision(const char *s, t_struct *t)
{
	t->aux = 0;
	t->precision = 0;
	t->flag_precision = 0;
	if (s[t->i] == '.')
	{
		t->flag_zero = 0;
		t->flag_precision = 1;
		t->i++;
		if (s[t->i] == '*')
		{
			if ((t->aux = va_arg(t->ap, int)) >= 0)
				t->precision = t->aux;
			t->i++;
		}
		else if (ft_isdigit(s[t->i]))
		{
			while (ft_isdigit(s[t->i]))
			{
				t->precision = t->precision * 10 + s[t->i] - 48;
				t->i++;
			}
		}
	}
}
