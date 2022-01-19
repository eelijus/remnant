# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sujilee <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:45:10 by sujilee           #+#    #+#              #
#    Updated: 2021/11/29 15:52:58 by sujilee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME) := libft.a

$(SRCS) := first.c second.c third.c

$(OBJS) : $(SRCS:.c=.o)


main : main.c libft.a
	gcc -o main main.c libft.a

$(NAME) : $(OBJS)
	ar -rcs $@ $?

%.o = %.c
	gcc -c $(SRCS) 

all : $(NAME)

clean :
	rm -f *.o
fclean : 
	rm -f libft.a
re : fclean all

.PHONY : re all clean fclean
