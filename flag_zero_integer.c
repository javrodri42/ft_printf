/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_zero_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 19:02:59 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/17 18:08:15 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_zero_integer(t_struct *flags)
{
	flags->j = 0;
	if ((flags->flag_width) && (flags->width > flags->count))
	{
		while (flags->j < (flags->width - flags->count))
		{
			write(1, "0", 1);
			flags->len++;
			flags->j++;
		}
	}
}
