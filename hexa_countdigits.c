/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_countdigits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 12:57:21 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:29:57 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hexa_countdigits(t_struct *flags, unsigned int hexa)
{
	flags->count = 0;
	while (hexa >= 16)
	{
		hexa = hexa / 16;
		flags->count++;
	}
	flags->count++;
}
