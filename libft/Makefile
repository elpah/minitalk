# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 18:22:24 by eobeng            #+#    #+#              #
#    Updated: 2024/10/08 18:35:37 by eobeng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =   ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_toupper.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_putstrnbr_fd.c
		

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

CC = cc
AR = ar rc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
