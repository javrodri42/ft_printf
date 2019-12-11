# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 08:29:56 by javrodri          #+#    #+#              #
#    Updated: 2019/12/11 13:06:13 by javrodri         ###   ########.fr        #
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
			integer_width_print.c \
			flag_minus_integer.c \
			flag_precision_integer.c \
			number_print.c \
			initialize_flags.c
			 
GCC			= @gcc -Wall -Wextra -Werror -c

OBJS 		= $(SRCS:.c=.o)

INCLUDES 	= ./

all: $(NAME)

$(NAME) : $(SRCS) ft_printf.h
			$(GCC) -I$(INCLUDES) -c $(SRCS)
			-@ar rc $(NAME) $(OBJS)
			-@ranlib $(NAME)
			
clean:
			-@$(RM) $(OBJS) 

fclean: clean
			-@$(RM) $(NAME)

re: 		fclean all
