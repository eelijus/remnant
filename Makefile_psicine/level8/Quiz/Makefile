# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujilee <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:45:10 by sujilee           #+#    #+#              #
#    Updated: 2021/11/29 16:11:14 by sujilee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := main

SRC_DIR = ./src/
SRC_NAME = main.c first.c second.c third.c

# 결과예시 : ./src/main.c
SRC = $(addprefix $(SRC_DIR),$(SRC_NAME))

OBJ_DIR = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)

OBJ = $(addprefix $(OBJ_DIR),$(OBJ_NAME))

INCLUDE := -I./include

all : $(NAME)

re : fclean all

clean :
	rm -f $(OBJ)
fclean :
	rm -f $(NAME)

run : all
	./$(NAME)

$(NAME) : $(OBJ)
	gcc -o main $(OBJ)

$(LIBFT) : $(LIB_OBJS)
	ar -rcs $(LIBFT) $(LIB_OBJS)

$(OBJ_DIR)%.o : (SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	gcc $(INCLUDE) -c $(SRC_DIR)%.c -o $(OBJ_DIR)%.o

.PHONY : all re clean fclean
