/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer_width.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 16:14:36 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/30 18:02:56 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer_width(t_struct *flags)
{
	int total;

	flags->j = 0;
	total = flags->width - flags->aux - 2;
	while (flags->j < total)
	{
		write(1, " ", 1);
		flags->len++;
		flags->j++;
	} 
}
