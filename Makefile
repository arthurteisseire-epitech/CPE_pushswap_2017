##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
SRC     =	$(DSRC)main.c
INC	=	$(realpath include)
CFLAGS	=	-Wall -W -Wextra -I$(INC) -L$(DLIB) -l$(LIB) -g
OBJ	=	$(SRC:.c=.o)
NAME	=	push_swap

all: $(NAME)

$(NAME):	$(OBJ)
	make re -C $(DLIB)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	make fclean -C tests
	rm -f $(NAME)

re: fclean all
	make clean
