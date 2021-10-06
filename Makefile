# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 09:44:18 by ceduard2          #+#    #+#              #
#    Updated: 2021/10/05 19:12:20 by ceduard2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf.a

CC	= clang

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ft_printf.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_itoa.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putptr.c\
		ft_puthex.c\
		ft_putuphex.c\


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rs $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

cleanall: clean fclean

re: clean fclean all

.PHONY: all bonus clean fclean re
