# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 19:47:29 by zihirri           #+#    #+#              #
#    Updated: 2021/12/16 17:03:56 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = @ar -rc

CC = @gcc -c

RM = @rm -rf

FLAGS = @-Wall -Werror -Wextra 

FILES = ft_atoi.c 

FILES_BS = ft_atoi_bonus.c 

NAME = client server

NAME_B = client_bonus server_bonus

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m


all : $(NAME)

$(NAME) :
	@gcc -Wall -Werror -Wextra ft_atoi.c client.c -o client
	@gcc -Wall -Werror -Wextra server.c  -o server
	@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

bonus : $(NAME_B)

$(NAME_B) :
	@gcc -Wall -Werror -Wextra ft_atoi_bonus.c client_bonus.c  -o client_bonus
	@gcc -Wall -Werror -Wextra server_bonus.c -o server_bonus
	@echo "$(C_GREEN)[BONUS CREATED!]$(C_RES)"


clean:
	${RM} ${EXE}
	@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"
	

fclean: clean
	${RM} client server client_bonus server_bonus
	@echo "$(C_RED)[PROJECT.A REMOVED!]$(C_RES)"

re: fclean all
