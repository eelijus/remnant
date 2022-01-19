# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujilee <sujilee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/14 22:30:00 by mki               #+#    #+#              #
#    Updated: 2021/12/07 13:37:28 by sujilee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = linkeddeque
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LINKEDLIST := linkedlist.a
LINKEDLIST_DIR := ./linkedlist

FILE = createLinkedDeque\
		insertFrontLD\
		insertRearLD\
		deleteFrontLD\
		deleteRearLD\
		peekFrontLD\
		peekRearLD\
		deleteLinkedDeque\
		isLinkedDequeEmpty\
		displayLinkedDeque\
		main


INCS = ./includes

SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILE))) 
OBJS_DIR = ./srcs/
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILE))) 

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $< -I$(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all bonus clean fclean re
