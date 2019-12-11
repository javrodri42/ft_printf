/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:41:40 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/11 18:32:35 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string_width(t_struct *flags)
{
	int total;
	
	//printf("print_string_width");
	flags->j = 0;
	total = flags->width - flags->aux;
	while (flags->j < total)
	{
		write(1, " ", 1);
		flags->len++;
		flags->j++;
	} 
}