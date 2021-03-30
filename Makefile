# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 11:20:34 by tblanco           #+#    #+#              #
#    Updated: 2021/03/28 22:00:45 by tblanco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS		= -Wall -Wextra -Werror
CC			= gcc

SRC			= $(wildcard ./src/*.c)
OBJS		= $(SRC:.c=.o)

#TODO - files .o in folder obj

# Color
BLACK := "\e[0;30m"
RED := "\e[0;31m"
GREEN := "\e[0;32m"
YELLOW := "\e[0;33m"
BLUE := "\e[0;34m"
MAGENTA := "\e[0;35m"
CYAN := "\e[0;36m"
RESET :="\e[0m"

obj/%.o 	: %.c
				$(CC) $(CFLAGS) -c -I./includes $< -o ${<:.c=.o}

all			: $(NAME)

$(NAME)		: $(OBJS)
			    ar rc $(NAME) $(OBJS)
			    ranlib $(NAME)
			    @printf ${GREEN}"[$(NAME)] created\n"${RESET}

clean		:
				RM $(OBJS)

fclean		: clean
				RM $(NAME)

re			: fclean all

test		: re
				@printf ${YELLOW}"[TEST] $(NAME) start\n"${RESET}
				@$(CC) $(CFLAGS) test_libft.c ../Unity/src/unity.c -L. -lft && ./a.out && RM a.out
				@printf ${BLUE}"[TEST] $(NAME) finish\n"${RESET}

.PHONY		: all clean 