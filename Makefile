# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 12:28:54 by mbari             #+#    #+#              #
#    Updated: 2020/12/17 09:41:16 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_read.s ft_write.s ft_strdup.s
OBJ = $(SRC:.s=.o)

NFLAGS = -f macho64

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.s
	nasm $(NFLAGS) $^

clean: 
	/bin/rm -f $(OBJ) $(BONUS_OBJ) a.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
