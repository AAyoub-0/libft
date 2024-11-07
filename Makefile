LIB = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iincludes -g

SRC_DIR = src

SRC = 	./SRC_DIR/ft_isalpha.c \
	./SRC_DIR/ft_memset.c \
	./SRC_DIR/ft_isdigit.c \
	./SRC_DIR/ft_isalnum.c \
	./SRC_DIR/ft_isascii.c \
	./SRC_DIR/ft_isprint.c \
	./SRC_DIR/ft_strlen.c \
	./SRC_DIR/ft_bzero.c \
	./SRC_DIR/ft_memcpy.c \
	./SRC_DIR/ft_strlcpy.c \
	./SRC_DIR/ft_strlcat.c \
	./SRC_DIR/ft_toupper.c \
	./SRC_DIR/ft_tolower.c \
	./SRC_DIR/ft_strchr.c \
	./SRC_DIR/ft_strncmp.c \
	./SRC_DIR/ft_memchr.c \
	./SRC_DIR/ft_memcmp.c \
	./SRC_DIR/ft_strnstr.c \
	./SRC_DIR/ft_memmove.c \
	./SRC_DIR/ft_atoi.c \
	./SRC_DIR/ft_calloc.c \
	./SRC_DIR/ft_strdup.c \
	./SRC_DIR/main.c

OBJ = $(SRC:.c=.o)

all: $(LIB)

$(LIB): $(OBJ)
	ar rcs $@ $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ) $(LIB)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
