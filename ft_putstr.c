/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:21:52 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/23 12:55:25 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}