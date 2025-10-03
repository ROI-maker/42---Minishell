NAME = minishell

# Directories
SRC_DIR = src
SRC_DIR_BUILTINS = src/builtins
SRC_DIR_EXEC = src/execution
SRC_DIR_INIT = src/init
SRC_DIR_PARSING = src/parsing
SRC_DIR_UTILS = src/utils
LIBFT_DIR = includes/minilib

# Source files (empty for now, add as you go)
SRC =	$(SRC_DIR)/main.c \
		$(SRC_DIR_BUILTINS)/cd.c \
		$(SRC_DIR_BUILTINS)/echo.c \
		$(SRC_DIR_BUILTINS)/env.c \
		$(SRC_DIR_BUILTINS)/exit.c \
		$(SRC_DIR_BUILTINS)/export.c \
		$(SRC_DIR_BUILTINS)/pwd.c \
		$(SRC_DIR_BUILTINS)/unset.c \
		$(SRC_DIR_BUILTINS)/builtins_utils.c \
		$(SRC_DIR_EXEC)/exec.c \
		$(SRC_DIR_EXEC)/exec_utils.c \
		$(SRC_DIR_EXEC)/pipes.c \
		$(SRC_DIR_EXEC)/redirections.c \
		$(SRC_DIR_INIT)/init_env.c \
		$(SRC_DIR_INIT)/init_shell.c \
		$(SRC_DIR_INIT)/init_utils.c \
		$(SRC_DIR_PARSING)/expansions.c \
		$(SRC_DIR_PARSING)/lexer.c \
		$(SRC_DIR_PARSING)/parser.c \
		$(SRC_DIR_PARSING)/parsing_utils.c \
		$(SRC_DIR_UTILS)/env_utils.c \
		$(SRC_DIR_UTILS)/errors.c \
		$(SRC_DIR_UTILS)/exit_prog.c \
		$(SRC_DIR_UTILS)/free.c \
		$(SRC_DIR_UTILS)/history.c \
		$(SRC_DIR_UTILS)/signals.c \
		$(SRC_DIR_UTILS)/utils.c \

# Objects
OBJ = $(SRC:.c=.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR) -I$(LIBFT_DIR)/ft_printf -I.
LDFLAGS = -L$(LIBFT_DIR) -lft -lm -lreadline

# Colors
GREEN = \033[0;32ms
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
