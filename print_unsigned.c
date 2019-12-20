/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 12:19:52 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/20 11:26:01 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
 
 void	print_unsigned(t_struct *flags, unsigned int unsign)
 {
	char	*format;
		
		flags->j = 0;
		if ((flags->flag_precision == 1) && (flags->precision == 0) && (unsign == 0))
			flags->j = 0;
		else
		{
			format = ft_itoa_unsigned(unsign);
			while (format[flags->j] != '\0')
			{
				flags->len += write(1, &format[flags->j], 1);
				flags->j++;
			}
			free(format);
			format = NULL;
		}		 
 }