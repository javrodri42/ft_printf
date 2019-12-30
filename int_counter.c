/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_counter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 18:06:39 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/30 12:36:56 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	int_counter(t_struct *flags, int integer)
{
	char	*str;
	//printf("\ncount:%i", flags->count);
	flags->flag_integer_negative =  0;
	str = ft_itoa(integer);
	//printf("\ncount:%i", flags->count);
	flags->count = ft_strlen(str);
	//printf("\ncount:%i", flags->count);
	if (integer < 0)
		flags->flag_integer_negative = 1;		
}
