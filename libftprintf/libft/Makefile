# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 16:38:22 by asadritd          #+#    #+#              #
#    Updated: 2023/01/16 18:53:54 by asadritd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc -c 
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc

SRC = ft_isalpha.c ft_strlen.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_bzero.c\
ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_toupper.c\
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
ft_strdup.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRC)
	$(AR) $(NAME) $(OBJ)
	
all: $(NAME)

clean:
	/bin/rm -f *.o 
	
fclean: clean
	/bin/rm -f *.o $(NAME)

re: fclean all 