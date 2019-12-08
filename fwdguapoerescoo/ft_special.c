/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:37:47 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/02 18:26:48 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_special(const char *s, t_struct *t)
{
	ft_flags(s, t);
	ft_width(s, t);
	ft_precision(s, t);
}