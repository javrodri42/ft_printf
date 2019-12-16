/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:41:40 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/16 18:57:38 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string_width(t_struct *flags)
{
	int total;
	
	flags->j = 0;
	total = flags->width - flags->aux;
	if  (flags->width == 0)
	{
		while (flags->j < total)
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
	if  (flags->count == 0)
	{
		while (flags->j < flags->width)
		{
			write(1, " ", 1);
			flags->len++;
			flags->j++;
		}
	}
	while (flags->j < total)
	{
		write(1, " ", 1);
		flags->len++;
		flags->j++;
	} 
	
}