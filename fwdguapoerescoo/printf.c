/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:27:15 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 14:22:18 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_inicialize(t_struct *t)
{
	t->i = 0;
	t->len = 0;
	t->flag_minus = 0;
	t->flag_zero = 0;
	t->flag_width = 0;
	t->width = 0;
	t->precision = 0;
	t->flag_precision = 0;
	t->j = 0;
	t->aux = 0;
	t->flag_integer_negative = 0;
	t->count = 0;
}

int		ft_printf(const char *s, ...)
{
	t_struct	*t;

	if (!(t = (t_struct *)malloc(sizeof(t_struct))))
		return (-1);
	ft_inicialize(t);
	if (s == NULL)
		return (-1);
	va_start(t->ap, s);
	if (ft_strchr(s, '%'))
		ft_percent(s, t);
	else
	{
		ft_putstr_fd((char *)s, 1);
		t->len = ft_strlen(s);
	}
	va_end(t->ap);
	return (t->len);
}
