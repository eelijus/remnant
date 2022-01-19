# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujilee <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:02:16 by sujilee           #+#    #+#              #
#    Updated: 2021/11/29 15:36:31 by sujilee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS := first.c second.c third.c

OBJS := $(SRCS:.c=.o)

AR := ar

ARFLAGS := -rcs

CC := gcc

# -f는 경고 무시 옵션
RM := rm -f

main : main.c libft.a
	gcc main.c libft.a -o main

re : fclean all

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME)

$(NAME) : $(OBJS)
	 $(AR) $(ARFLAGS) $@ $?

.PHONY : all clean fclean re
