/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 23:50:28 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 16:56:07 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_count_int(t_struct *t, int integer)
{
	char	*str;

	t->flag_integer_negative = 0;
	str = ft_itoa(integer);
	t->count = ft_strlen(str);
	if (integer < 0)
		t->flag_integer_negative = 1;
}
