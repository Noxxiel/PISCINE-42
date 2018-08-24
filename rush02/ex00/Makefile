# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhammere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 17:00:14 by qhammere          #+#    #+#              #
#    Updated: 2018/07/22 14:44:35 by qhammere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = compilathor
FLAG = -Wall -Wextra -Werror
SRC0 = colle00.c main.c
SRC1 = colle01.c main.c
SRC2 = colle02.c main.c
SRC3 = colle03.c main.c
SRC4 = colle04.c main.c
SRC = main.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_atoi.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) -o colle-00 $(SRC0)
	gcc $(FLAG) -o colle-01 $(SRC1)
	gcc $(FLAG) -o colle-02 $(SRC2)
	gcc $(FLAG) -o colle-03 $(SRC3)
	gcc $(FLAG) -o colle-04 $(SRC4)
	gcc -c $(SRC0) $(SRC1) $(SRC2) $(SRC3) $(SRC4)

clean:
	rm -f *.o

fclean: clean
	rm -f colle-*

re: fclean all
