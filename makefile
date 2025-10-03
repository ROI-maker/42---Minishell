NAME = minishell

# Directories
SRC_DIR = src
INC_DIR = ../includes/minilib
LIBFT_DIR = ../includes/minilib

# Source files (empty for now, add as you go)
SRC = $(SRC_DIR)/pipex.c $(SRC_DIR)/utils.c

# Objects
OBJ = $(SRC:.c=.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -I$(INC_DIR)/ft_printf
LDFLAGS = -L$(LIBFT_DIR) -lft -lm

# Colors
GREEN = \033[0;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RED = \033[1;31m
RESET = \033[0m

# **************************************************************************** #
#                                  RULES                                       #
# **************************************************************************** #

all: banner $(NAME)
	@echo "$(GREEN)✔ Build terminé avec succès !$(RESET)"

banner:
	@echo "$(BLUE)====================================$(RESET)"
	@echo "$(YELLOW)        🚀🚀🚀  $(NAME) 🚀🚀🚀    $(RESET)"
	@echo "$(BLUE)====================================$(RESET)"

$(NAME): $(OBJ)
	@echo "$(YELLOW)[Linking]$(RESET) $@"
	@$(CC) $(OBJ) $(LDFLAGS) -o $@

%.o: %.c
	@echo "$(GREEN)[Compiling]$(RESET) $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)[Cleaning objects]$(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)[Removing binary]$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re banner
