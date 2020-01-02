/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:54:34 by javrodri          #+#    #+#             */
/*   Updated: 2020/01/02 16:13:50 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_negative(t_struct *flags, long int integer)
{
	if (integer == -2147483648)
		return (integer);
	write(1, "-", 1);
	flags->len++;
	integer *= -1;
	return (integer);
}
