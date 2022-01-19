# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujilee <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:38:22 by sujilee           #+#    #+#              #
#    Updated: 2021/11/29 16:24:41 by sujilee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS := first.c second.c third.c

OBJS := $(SRCS:.c=.o)

AR := ar

ARFLAGS := -rcs

CC := gcc

RM := rm -f


main : main.c libft.a
	$(CC) -o main main.c libft.a

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

re : fclean all

all : $(NAME)

clean : 
	$(RM) $(OBJS)
fclean :
	$(RM) $(NAME)

.PHONY : all clean fclean re
