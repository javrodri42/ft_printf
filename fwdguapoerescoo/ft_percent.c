/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:42:53 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 12:12:37 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_percent(const char *s, t_struct *t)
{
	while (s[t->i])
	{
		if (s[t->i] == '%')
		{
			t->i++;
			if (ft_strchr("*.-0123456789", s[t->i]))
				ft_special(s, t);
			if (ft_strchr("cspdiuxX%", s[t->i]))
				ft_type(s, t);
			/*else
			{
				write (1, &s[t->i], 1);
				t->len++;
			}
			** ya veremos lo que hago con este else.*/
		}
		else
		{
			write(1, &s[t->i], 1);
			t->len++;
		}
		t->i++;
	}
}
