/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:21:27 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/08 18:51:47 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	integer_type(t_struct *flags)
{
	int integer;
	
	flags->count = 0;
	integer = 0;
	integer = va_arg(flags->ap, int);
	int_counter(flags, integer);
	if (flags->width)
		flag_width_integer(flags, integer);
}
