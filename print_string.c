/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:54:35 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/11 19:04:06 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(t_struct *flags, char *str)
{
	
	flags->j = 0;
	if ((flags->flag_precision == 1) && (flags->precision == 0) && (str == 0))
		flags->j = 0;
	else
	{
		ft_putstr(str);
	}		
}