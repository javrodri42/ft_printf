/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 09:47:22 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/11 12:53:33 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_string(t_struct *flags)
{
	char *str;

	flags->count = 0;
	str = va_arg(flags->ap, char *);
	flags->count = ft_strlen(str);
	if (flags->flag_width)
		string_flag_width(flags, str);
}
