/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:12:45 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 00:18:16 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_flags(const char *s, t_struct *t)
{
	t->flag_minus = 0;
	t->flag_zero = 0;
	while (s[t->i] == '0' || s[t->i] == '-')
	{
		if (s[t->i] == '-')
			t->flag_minus = 1;
		if (s[t->i] == '0')
			t->flag_zero = 1;
		if (t->flag_minus)
			t->flag_zero = 0;
		t->i++;
	}
}
