/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:53:37 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/12/03 23:18:39 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

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

/*
**utils.c
*/

char			*ft_itoa(int n);
char			*ft_strchr(const char *s, int c);
int				ft_isdigit(int c);
int				ft_strlen(const char *str);
void			ft_putstr_fd(char *s, int fd);

/*
**printf.c
*/

int				ft_printf(const char *s, ...);
void			ft_percent(const char *s, t_struct *t);

/*
**percent.c
*/

void			ft_special(const char *s, t_struct *t);
void			ft_type(const char *s, t_struct *t);

/*
**special.c
*/

void			ft_flags(const char *s, t_struct *t);
void			ft_width(const char *s, t_struct *t);
void			ft_precision(const char *s, t_struct *t);

/*
**type.c
*/

void			ft_integer(t_struct *t);
void			ft_string(t_struct *t);

/*
**integer*************************************************************
*/

void			ft_flag_width_integer(t_struct *t, int integer);
void			ft_flag_zero_integer(t_struct *t);
void			ft_flag_precision_integer(t_struct *t);
void			ft_flag_minus_integer(t_struct *t, int integer);

/*
**count.c
*/

void			ft_count_int(t_struct *t, int integer);

/*
**printed.c
*/

int				ft_printed_negative(t_struct *t, int integer);
void			ft_printed_integer_width(t_struct *t);
void			ft_printed_num(t_struct *t, int integer);

/*
**string***************************************************************
*/



#endif
