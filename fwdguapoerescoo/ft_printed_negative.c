/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printed_negative.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:55:27 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 12:39:37 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_printed_negative(t_struct *t, int integer)
{
	write(1, "-", 1);
	t->len++;
	integer *= -1;
	return (integer);
}
