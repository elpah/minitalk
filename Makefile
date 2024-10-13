CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = server client

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

LIBFTDIR = ./libft/
LIBFT = $(LIBFTDIR)libft.a

PRINTFDIR = ./printf/
PRINTF = $(PRINTFDIR)ft_printf.a

RM = rm -rf

all: $(NAME)

server: $(SRCS_SERVER) $(LIBFT) $(PRINTF)
	@$(CC) $(CFLAGS) $(SRCS_SERVER) $(LIBFT) $(PRINTF) -o server

client: $(SRCS_CLIENT) $(LIBFT) $(PRINTF)
	@$(CC) $(CFLAGS) $(SRCS_CLIENT) $(LIBFT) $(PRINTF) -o client

$(LIBFT):
	@make all -sC $(LIBFTDIR)

$(PRINTF):
	@make all -sC $(PRINTFDIR)

clean: 
	@$(MAKE) -sC $(LIBFTDIR) clean
	@$(MAKE) -sC $(PRINTFDIR) clean
	@$(RM) $(NAME)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)
	@$(RM) $(PRINTF)

re: fclean all

.PHONY: all clean fclean re
