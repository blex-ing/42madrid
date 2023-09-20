
# INCLUDE_DIRS = ../
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = test_ft_vs_isascii.c
OBJ = $(SRC:.c=.o)
NAME = mi_test_ft_vs_isascii

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L.. -lft


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(wildcard mi_*) $(wildcard *.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
