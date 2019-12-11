/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:11:51 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/11 12:53:54 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(const char *format, t_struct *flags)
{
	if (format[flags->i] == 'd' || format[flags->i] == 'i')
		type_integer(flags);
	//if (format[flags->i] == 's')
	//	string_type(flags);
}