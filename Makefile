##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
DTOOLS	=	$(DSRC)tools/
SRC     =	$(DSRC)main.c \
		$(DSRC)array_to_lk_list.c \
		$(DTOOLS)my_atoi.c \
		$(DTOOLS)my_strlen.c
INC	=	$(realpath include)
CFLAGS	=	-Wall -W -Wextra -I$(INC) -ggdb3
OBJ	=	$(SRC:.c=.o)
NAME	=	push_swap

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make clean
