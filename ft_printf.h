/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:08:11 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/05 17:06:41 by javrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_struct
{
	va_list		ap;
	int			i;
	int			len;
	int			flag_minus;
	int			flag_zero;
	int			flag_width;
	int			width;
	int			aux;
	int			precision;
	int			flag_precision;
	int			j;
	int			flag_integer_negative;
	int			count;
}				t_struct;

int		ft_printf(const char *format, ...);
void	check_flags(const char *format, t_struct *flags);
void	parse_flags(const char *format, t_struct *flags);
void	minus_zero_flag(const char *format, t_struct *flags);
void	ft_width(const char *format, t_struct *flags);

#endif
