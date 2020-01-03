/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_countdigits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 19:28:42 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:34:20 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pointer_countdigits(t_struct *flags, unsigned long hexa)
{
	flags->count = 0;
	while (hexa >= 16)
	{
		hexa = hexa / 16;
		flags->count++;
	}
	flags->count++;
}
