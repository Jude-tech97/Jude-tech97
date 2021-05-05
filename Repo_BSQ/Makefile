##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##

SRC =	src/buffer.c 		\
	src/check_square.c 		\
	src/disp_map.c 			\
	src/error.c  			\
	src/fill_in_array.c 	\
	src/find_square.c 		\
	src/malloc_array.c 		\
	src/make_a_park.c 		\
	src/my_atoi.c 			\
	src/nbr_cols.c 			\
	src/nbr_lines.c 		\
	src/open_file.c 		\
	src/my_printf.c 		\
	src/display_int.c		\
	src/display_char.c		\
	src/display_str.c		\
	src/display_unsigned.c	\
	src/my_put_nbr.c		\
	src/my_putchar.c		\
	src/main.c 				\
	src/my_putstr.c

OBJ = $(SRC:.c=.o)

CCLUD = -I./include

all: $(SRC)
	gcc -o bsq -g3 $(SRC) $(CCLUD)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all