/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:54:35 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/03 17:37:11 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(t_struct *flags, char *str)
{
	if (flags->flag_precision == 0)
	{
		flags->j = 0;
		{
			while (str[flags->j] != '\0')
			{
				flags->len += write(1, &str[flags->j], 1);
				flags->j++;
			}
		}
	}
}
