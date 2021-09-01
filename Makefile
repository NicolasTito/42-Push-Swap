# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 16:03:32 by nide-mel          #+#    #+#              #
#    Updated: 2021/09/01 17:32:16 by nide-mel         ###   ########.fr        #
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

SRC_PATH = ./src

OBJ_PATH = ./obj

SRC_NAME = main.c\
			check_init.c\
			swap_a.c\
			swap_b.c\
			organize.c\
			utils.c\
			sort_number.c\
			input_struct.c\
			organize_chunk.c

SRC_BONUS = main.c\
			check_init.c\
			swap_a.c\
			swap_b.c\
			organize.c\
			utils.c\
			sort_number.c\
			input_struct.c\
			organize_chunk.c

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))
OBJB = $(addprefix $(OBJ_PATH)/, $(SRC_BONUS:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
SRCB = $(addprefix $(SRC_PATH)/, $(SRC_BONUS))

all : $(NAME) $(NAME_BONUS)

$(NAME): $(OBJ)
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) $(LIBFT) -o $(NAME)
	@echo "\x1b[36m[PUSH_SWAP COMPILED]\x1b[0m"

$(NAME_BONUS): $(OBJB)
	@$(CC) $(CFLAGS) $(OBJB) $(INCLUDES) $(LIBFT) -o $(NAME_BONUS)
	@echo "\x1b[36m[CHECKER COMPILED]\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p obj
	@$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(OBJ)
	@rm -rf $(OBJB)
	@echo "\033[33mall $(NAME) and $(NAME_BONUS) .o files are removed\033[0m"

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME) $(NAME_BONUS)
	@echo "\033[31m$(NAME) and $(NAME_BONUS) is deleted\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
