# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/27 14:57:28 by nide-mel          #+#    #+#              #
#    Updated: 2021/08/07 17:05:22 by nide-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

PATH_SRC = ./libc/

CFLAGS = -Wall -Wextra -Werror

INC = -I./includes

SRC = ft_memset.c	\
	ft_bzero.c	\
	ft_memcpy.c	\
	ft_memccpy.c	\
	ft_memmove.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_strlen.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_strnstr.c	\
	ft_strncmp.c	\
	ft_atoi.c	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_calloc.c	\
	ft_strdup.c	\
	ft_substr.c	\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c	\
	ft_itoa.c	\
	ft_strmapi.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstclear.c	\
	ft_lstdelone.c	\
	ft_lstiter.c	\
	ft_lstlast.c	\
	ft_lstmap.c	\
	ft_lstnew.c	\
	ft_lstsize.c	\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\x1b[36m[LIBFT COMPILED]\x1b[0m"

%.o: %.c
	@echo "\x1b[32mSources compiling...\x1b[0m"
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(OBJ)
	@echo "\x1b[33mall libft .o files are removed\x1b[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\x1b[31m$(NAME) is deleted\x1b[0m"

re: fclean all

.PHONY: all clean fclean re
