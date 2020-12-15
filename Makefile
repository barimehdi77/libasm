# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 12:28:54 by mbari             #+#    #+#              #
#    Updated: 2020/12/15 14:26:47 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_read.s ft_write.s
OBJ = $(SRC:.s=.o)

#BONUS_OBJ = $(SRC_BONUS:%.c=%.o)

#NASM = nasm

NFLAGS = -f macho64

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

#bonus:  $(BONUS_OBJ)
#	ar rc $(NAME) $(BONUS_OBJ)
#	ranlib $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.s
	nasm $(NFLAGS) $^

clean: 
	/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
