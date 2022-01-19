# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujilee <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 13:28:26 by sujilee           #+#    #+#              #
#    Updated: 2021/11/29 13:49:00 by sujilee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

OBJS := first.o second.o third.o

SRCS := first.c second.c third.c

AR := ar

ARFLAGS := -rcs

main : main.c libft.a
	gcc -o main main.c libft.a

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $?
#	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

 %.o : %.c
#$(OBJS) : $(SRCS)
	$(CC) $(CFALGS) -c $<
