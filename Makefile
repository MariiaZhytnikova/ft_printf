# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhitnik <mzhitnik@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 10:36:53 by mzhitnik          #+#    #+#              #
#    Updated: 2024/12/02 14:47:00 by mzhitnik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_puthex_fd.c \
	ft_putunsigned_fd.c ft_putptr_fd.c ft_strlen.c
OBJ = $(SRC:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror -I.
AR = ar rcs

all:$(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re



SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
	ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
	ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
	ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_striteri.c\
	ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
	ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c  \
	ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c