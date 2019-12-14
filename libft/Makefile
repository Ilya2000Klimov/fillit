# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/23 20:46:39 by iklimov           #+#    #+#              #
#    Updated: 2019/12/12 17:48:54 by iklimov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I. -c

LST = lst
MATH = math
MEM = mem
PUT = put
STR = str
OBJF = objectfiles
HEAD = ./

MEMSRC =	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memalloc.c \
			ft_memdel.c \

STRSRC =	ft_strlen.c \
			ft_strdup.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_islower.c \
			ft_isupper.c \
			ft_strtrimchar.c \
			ft_wordcount.c \
			ft_wordlen.c \
			ft_skip.c \
			ft_strjoinreal.c \

MATHSRC =	ft_atoi.c \
			ft_itoa.c \
			ft_intlength.c \
			ft_intsqrt.c \
			ft_abs.c \
			ft_isqrtc.c \
			ft_isqrtf.c \

PUTSRC =	ft_putchar.c \
			ft_putstr.c \
			ft_putendl.c \
			ft_putnbr.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_print_bits.c \
			ft_print_hex.c \

LSTSRC =	ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_swap_p.c \
			ft_list_at.c \
			ft_list_find.c \
			ft_list_findsize.c \
			ft_lstdelthis.c \

SRC = $(patsubst %.c, $(MEM)/%.c, $(MEMSRC))
SRC += $(patsubst %.c, $(STR)/%.c, $(STRSRC))
SRC += $(patsubst %.c, $(MATH)/%.c, $(MATHSRC))
SRC += $(patsubst %.c, $(LST)/%.c, $(LSTSRC))
SRC += $(patsubst %.c, $(PUT)/%.c, $(PUTSRC))

OFILES = $(SRC:.c=.o)

OBJ = $(patsubst %.o, $(OBJF)/%.o, $(OFILES))

.PHONY: all clean fclean re

all: $(NAME)

test:
	echo $(OBJ)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

$(OBJ): $(OBJF)/%.o : %.c
	@gcc -c $^ -I$(HEAD) -o $@

clean:
		/bin/rm -f $(OBJ)
fclean: clean
		/bin/rm -f $(NAME)

re: fclean all