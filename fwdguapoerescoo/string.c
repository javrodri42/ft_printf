/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 23:08:30 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/11 09:41:45 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_string(t_struct *t)
{
	char *str;

	t->count = 0;
	str = va_arg(t->ap, char *);
	t->count = ft_strlen(str);
	if (t->flag_width)
		ft_flag_width_string(t, str);
	if (integer < 0)
		integer = ft_printed_negative(t, str);
	if (t->flag_precision)
		ft_flag_precision_integer(t, str);
	ft_printed_num(t, str);
	if (t->flag_minus)
		ft_flag_minus_integer(t, str);
}
