# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 18:14:59 by iklimov           #+#    #+#              #
#    Updated: 2019/11/12 19:56:58 by iklimov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLG = -Wextra -Wall -Werror
SRCS = #main.c io.c solver.c bits.c -Llibft -lft
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)
		gcc -g -o $(NAME) $(CFLG) $(SRCS)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME) 

re: fclean all
