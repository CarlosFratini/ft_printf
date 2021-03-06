# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceduard2 <ceduard2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 09:44:18 by ceduard2          #+#    #+#              #
#    Updated: 2021/10/20 16:03:19 by ceduard2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT	= libft.a

NAME	= libftprintf.a

CC		= clang

CFLAGS	= -Wall -Wextra -Werror -g

SRCS	= ft_printf.c\
		ft_print_char.c\
		ft_print_str.c\
		ft_print_ptr.c\
		ft_print_int.c\
		ft_print_uint.c\
		ft_print_hex.c\
		ft_print_uhex.c\

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJS)
		$(MAKE) -C ./libft
		cp libft/libft.a $(NAME)
		ar -rcs $(NAME) $(OBJS)

clean:
		$(MAKE) clean -C ./libft
		rm -f $(OBJS)

fclean:	clean
		$(MAKE) fclean -C ./libft
		rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
