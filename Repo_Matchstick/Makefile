##
## EPITECH PROJECT, 2020
## Repo_Matchstick
## File description:
## Makefile
##

SRC =	src/main.c 			\
	src/print_map.c 		\
	src/my_setchar.c 		\
	src/my_putstr.c 		\
	src/my_putchar.c 		\
	src/my_getnbr.c 		\
	src/invalid_input.c 	\
	src/generatorof_map.c 	\
	src/free_map.c 			\
	src/manage_ia.c 		\
	src/manage_matches.c 	\
	src/manage_player.c 	\
	src/my_strcat.c 		\
	src/my_strlen.c 		\
	src/my_put_nbr.c 		\
	src/my_getread.c 		\
	src/realloc.c 			\
	src/play.c

OBJ = $(SRC:.c=.o)

CCLUD = -I ./include

all: $(SRC)
	gcc -o matchstick -g3 $(SRC) $(CCLUD)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all