# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 08:29:56 by javrodri          #+#    #+#              #
#    Updated: 2019/12/30 19:39:27 by javrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS 		= ft_printf.c \
			check_flags.c \
			ft_strchr.c \
			ft_strlen.c \
			minus_zero_flags.c \
			precision_flags.c \
			width_flag.c \
			ft_isdigit.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			check_type.c \
			type_integer.c \
			ft_itoa.c \
			flag_width_integer.c \
			print_negative.c \
			flag_zero_integer.c \
			int_counter.c \
			print_integer_width.c \
			flag_minus_integer.c \
			flag_precision_integer.c \
			number_print.c \
			initialize_flags.c \
			print_string.c \
			type_string.c \
			print_string_width.c \
			flag_width_string.c \
			ft_putstr.c \
			flag_minus_string.c \
			flag_precision_string.c \
			type_char.c \
			ft_strdup.c \
			type_unsigned_int.c \
			print_unsigned.c \
			ft_itoa_unsigned.c \
			type_hexa.c \
			ft_putchar.c \
			hexa_countdigits.c \
			type_percent.c \
			type_pointer.c \
			flag_zero_percent.c \
			flag_width_pointer.c \
			flag_precision_pointer.c \
			print_pointer_width.c \
			pointer_countdigits.c \
			flag_minus_pointer.c
	#		main.c
					 
GCC			= @gcc -Wall -Wextra -Werror -g

OBJS 		= $(SRCS:.c=.o)

INCLUDES 	= ./

all: $(NAME)
			
#$(NAME) :
#			$(GCC) $(SRCS) ft_printf.h

$(NAME) : $(SRCS) ft_printf.h
			$(GCC) -I$(INCLUDES) -c $(SRCS)
			-@ar rc $(NAME) $(OBJS)
			-@ranlib $(NAME)
			
clean:
			-@$(RM) $(OBJS) 

fclean: clean
			-@$(RM) $(NAME)

re: 		fclean all
