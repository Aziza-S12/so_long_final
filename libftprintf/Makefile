# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 18:11:34 by asadritd          #+#    #+#              #
#    Updated: 2023/01/16 18:53:26 by asadritd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

HEADER = ft_printf.h

LIBFT = libft_clean/libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printf_c.c ft_printf_s.c ft_printf_d_i.c ft_printf_u.c\
ft_printf_x_upx.c ft_printf_p.c 

OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all