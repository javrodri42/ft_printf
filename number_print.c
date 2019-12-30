/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:19:15 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/30 19:57:32 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	number_print(t_struct *flags, int	integer)
{
	char	*format;
	
	flags->j = 0;
	if ((flags->flag_precision == 1) && (flags->precision == 0) && (integer == 0))
		flags->j = 0;
	else
	{
		format = ft_itoa(integer);
		while (format[flags->j] != '\0')
		{
			flags->len += write(1, &format[flags->j], 1);
			flags->j++;
		}
		free(format);
		format = NULL;
	}		
}
