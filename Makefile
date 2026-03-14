# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadeen <sadeen@42school.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/13 17:00:00 by sadeen            #+#    #+#              #
#    Updated: 2026/03/13 17:00:00 by sadeen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIRS =  src 
LIBFT_DIR = libft
NAME = push_swap

# Source files
SRCS = $(shell find $(SRC_DIRS) -name "*.c")
OBJS = $(SRCS:.c=.o)

# Libft
LIBFT = $(LIBFT_DIR)/libft.a

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

# Default target
all: $(LIBFT) $(NAME)

# Build executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "Executable $(NAME) created!"

# Build libft
$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# Remove object files
clean:
	@find $(SRC_DIRS) -name "*.o" -type f -delete
	@echo "All object files removed!"
	@$(MAKE) -C $(LIBFT_DIR) clean

# Remove executable + object files
fclean: clean
	@rm -f $(NAME)
	@echo "Executable $(NAME) removed!"
	@$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re