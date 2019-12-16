/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_precision_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 01:36:09 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/16 18:30:06 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flag_precision_string(t_struct *flags)
{
	int aux;
	aux = flags->precision < flags->count ? flags->precision : flags->count;
	flags->j = 0;
	//if (flags->precision < flags->count)
		//flags->aux = flags->count;
	while (flags->j < aux)
	{
		//printf("flag_precision string");
		write(1, &flags->ap[flags->j], 1);
			//flags->len++;
			flags->j++;
	}
}