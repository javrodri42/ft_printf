/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_counter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:06:39 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:32:34 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	int_counter(t_struct *flags, int integer)
{
	char	*str;

	flags->flag_integer_negative = 0;
	str = ft_itoa(integer);
	flags->count = ft_strlen(str);
	if (integer < 0)
		flags->flag_integer_negative = 1;
}
