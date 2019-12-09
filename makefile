# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 08:29:56 by javrodri          #+#    #+#              #
#    Updated: 2019/12/09 20:07:09 by javrodri         ###   ########.fr        #
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
			integer_type.c \
			ft_itoa.c \
			flag_width_integer.c \
			print_negative.c \
			flag_zero_integer.c \
			int_counter.c \
			integer_width_print.c
			 
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
