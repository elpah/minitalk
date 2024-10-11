# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 15:10:54 by eobeng            #+#    #+#              #
#    Updated: 2024/10/09 15:56:14 by eobeng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for printf

SRCS = ft_printf.c ft_printaddress.c ft_printchar.c ft_printdigit.c \
		ft_printstr.c ft_printudigit.c ft_printhex.c

LIBFTDIR = ../libft/
LIBFT = $(LIBFTDIR)libft.a
OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

NAME = ft_printf.a

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(NAME): $(LIBFT) $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
