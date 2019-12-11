/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:08:13 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/11 19:12:51 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_integer_width(t_struct *flags)
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
