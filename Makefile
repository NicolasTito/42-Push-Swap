# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 16:03:32 by nide-mel          #+#    #+#              #
#    Updated: 2021/08/07 17:17:07 by nide-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

HEADER = ./includes/push_swap.h
HEADER_BONUS = ./includes/checker.h

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

INCLUDES = -I libft/includes -I ./includes

OBJ_PATH = ./objs
SRC_PATH = ./src

SRC_NAME =

SRC_BONUS =

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
SRCB = $(addprefix $(SRC_PATH)/, $(SRC_BONUS))

OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))
OBJB = $(addprefix $(OBJ_PATH)/, $(OBJ_BONUS))

all : $(NAME) $(NAME_BONUS)

$(NAME): $(OBJ)
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) $(LIBFT) -o $(NAME)
	@echo "\x1b[36m[PUSH_SWAP COMPILED]\x1b[0m"

$(NAME_BONUS): $(OBJB)
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJB) $(INCLUDES) $(LIBFT) -o $(NAME_BONUS)
	@echo "\x1b[36m[CHECKER COMPILED]\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	@make clean -C $(LIB_PATH)
	@rm -rf $(OBJ)
	@rm -rf $(OBJ2)
	@echo "\033[33mall $(NAME) and $(NAME2) .o files are removed\033[0m"

fclean: clean
	@make fclean -C $(LIB_PATH)
	@rm -f $(NAME) $(NAME2)
	@echo "\033[31m$(NAME) and $(NAME2) is deleted\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
