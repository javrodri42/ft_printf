/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_zero_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 15:13:44 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:02:07 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_zero_percent(t_struct *flags)
{
	flags->j = 0;
	if (!(flags->flag_minus))
	{
		if ((flags->flag_width) && (flags->width > flags->count))
		{
			while (flags->j < (flags->width - flags->count - 1))
			{
				write(1, "0", 1);
				flags->len++;
				flags->j++;
			}
		}
	}
}
