##
## EPITECH PROJECT, 2020
## Repo_MySokoban
## File description:
## Makefile
##

SRC =	src/main.c 			\
	src/help.c 				\
	src/sbk_loop.c 			\
	src/display_char.c 		\
	src/my_strlen.c 		\
	src/print_array.c 		\
	src/move_player.c 		\
	src/key.c 				\
	src/check_map.c 		\
	src/check_victory.c 	\
	src/reset_map.c 		\
	src/check_lose.c 		\
	src/do_loseorwin.c 		\
	src/my_read_file.c 		\
	src/error.c 			\
	src/split_str.c 		\
	src/display_int.c 		\
	src/display_str.c 		\
	src/display_unsigned.c 	\
	src/my_strcmp.c 		\
	src/my_printf.c 		\
	src/my_put_nbr.c		\
	src/my_putchar.c 		\
	src/my_putstr.c 		\
	src/open_file.c

OBJ = $(SRC:.c=.o)

CCLUD = -I ./include

all: $(SRC)
	gcc -o my_sokoban -g3 $(SRC) $(CCLUD) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all