# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfaoussi <mfaoussi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 08:03:22 by mfaoussi          #+#    #+#              #
#    Updated: 2024/01/01 11:48:48 by mfaoussi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c hex.c pointer.c print_u.c \
		./00-mini-libft/ft_putchar_fd.c ./00-mini-libft/ft_putstr_fd.c \
		./00-mini-libft/ft_putnbr_fd.c ./00-mini-libft/ft_strdup.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f
EXEC = exec

all: $(NAME)


$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)


clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY: all clean fclean re