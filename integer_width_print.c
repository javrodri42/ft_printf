/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_width_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:08:13 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/08 21:12:34 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	integer_width_print(t_struct *flags)
{
	int total;

	flags->j = 0;
	total = flags->width - flags->aux;
	while (flags->j < total)
	{
		write(1, " ", 1);
		flags->len++;
		flags->j++;
	} 
}
