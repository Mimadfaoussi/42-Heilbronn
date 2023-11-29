# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 08:03:22 by mfaoussi          #+#    #+#              #
#    Updated: 2023/11/24 11:49:45 by mfaoussi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c 
OBJ = $(SRC:.c=.o)
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBFT = ../00-libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:
		$(RM) $(NAME) $(OBJ)

re:		fclean $(NAME)

.PHONY: all clean fclean re