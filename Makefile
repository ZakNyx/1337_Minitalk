# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 19:47:29 by zihirri           #+#    #+#              #
#    Updated: 2021/12/15 20:34:42 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalkpirntf.a

AR = ar -rc

CC = gcc -c

RM = rm -rf

FLAGS = -Wall -Werror -Wextra 

FILES = ft_parse.c \
	ft_printf.c \
	ft_printf_address.c \
	ft_printf_chars.c \
	ft_printf_numbers.c \
	ft_printf_tools.c \
	ft_strlen.c \
	ft_putnbr_fd.c \
	ft_putchar_fd.c \
	ft_atoi.c \
	client.c

CLIENT = client.c

SERVER = server.c

EXE = client.exe server.exe

O = client server
# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

OBJS = $(subst .c,.o,$(FILES))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(FILES)
	$(AR) $(NAME) $(OBJS)
	# ${GCC}  $(CLIENT) $(NAME) -o client
	# ${GCC}  server.c $(NAME) -o server
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"
	${RM} ${EXE}

clean:
	${RM} ${OBJS}
	${RM} ${EXE}
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"
	

fclean: clean
	${RM} ${NAME}
	@echo "$(C_RED)[PROJECT.A REMOVED!]$(C_RES)"

re: fclean all
