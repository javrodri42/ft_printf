/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:08:11 by javrodri          #+#    #+#             */
/*   Updated: 2019/12/15 22:46:09 by javrodri         ###   ########.fr       */
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
void	width_flag(const char *format, t_struct *flags);
void	initialize_flags(t_struct *flags);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
void	precision_flags(const char *format, t_struct *flags);
int		ft_isdigit(int c);
void	ft_putstr_fd(const char *str, int fd);
void	ft_putchar_fd(char c, int fd);
void	check_type(const char *format, t_struct *flags);
void	int_counter(t_struct *flags, int integer);
void	flag_width_integer(t_struct *flags, int integer);
void	flag_minus_integer(t_struct *flags, int integer);
void	flag_zero_integer(t_struct *flags);
void	flag_precision_integer(t_struct *flags);
void	type_integer(t_struct *flags);
void	print_integer_width(t_struct *flags);
int		print_negative(t_struct *flags, int integer);
char	*ft_itoa(int n);
void	number_print(t_struct *flags, int	integer);
void	type_string(t_struct *flags);
void	flag_width_string(t_struct *flags, char *str);
void	print_string(t_struct *flags, char *str);
void	print_string_width(t_struct *flags);
void	flag_widht_string(t_struct *flags, char *format);
void	ft_putstr(char *str);
void	flag_minus_string(t_struct *flags);
void	flag_precision_string(t_struct *flags);

#endif
