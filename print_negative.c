/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 18:54:34 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/10 12:56:58 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_negative(t_struct *flags, int integer)
{
	write(1, "-", 1);
	flags->len++;
	integer *= -1;
	return (integer);
}
