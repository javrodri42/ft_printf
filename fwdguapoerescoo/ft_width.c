/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:13:27 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 12:17:30 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_width(const char *s, t_struct *t)
{
	t->aux = 0;
	t->width = 0;
	t->flag_width = 0;
	while (s[t->i] == '*' || ft_isdigit(s[t->i]))
	{
		if (s[t->i] == '*')
		{
			t->aux = va_arg(t->ap, int);
			t->flag_minus = t->aux < 0 ? 1 : t->flag_minus;
			t->width = t->aux < 0 ? -(t->aux) : t->aux;
			t->flag_width = 1;
			t->i++;
		}
		else if (ft_isdigit(s[t->i]))
		{
			t->flag_width = 1;
			t->width = 0;
			while (ft_isdigit(s[t->i]))
			{
				t->width = t->width * 10 + s[t->i] - 48;
				t->i++;
			}
		}
	}
}
