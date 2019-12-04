# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvega-tr <fvega-tr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/03 13:11:30 by fvega-tr          #+#    #+#              #
#    Updated: 2019/12/03 16:32:31 by fvega-tr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_count_int.c ft_flag_minus_integer.c ft_flag_precision_integer.c ft_flag_width_integer.c ft_flag_zero_integer.c\
		ft_flags.c ft_integer.c ft_percent.c ft_precision.c ft_printed_interger_width.c ft_printed_negative.c ft_printed_num.c\
		ft_special.c ft_type.c ft_width.c printf.c utils.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

$(NAME): $(SRCS) printf.h
		@gcc -Wall -Werror -Wextra -c $(SRCS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)


all: $(NAME)

clean:
		@rm -f $(OBJS) $(OBJS_BONUS)
fclean: clean
		@rm -f  $(NAME)
re:		fclean all

.PHONY: all, clean, fclean, re