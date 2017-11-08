##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
FUNC	=	$(DSRC)/functions/
		
SRC     =	$(DSRC)main.c \
		$(FUNC)swap.c \
		$(FUNC)rotate.c
INC	=	$(realpath include)
NAME	=	a.out
CFLAGS	=	-Wall -W -Wextra -I$(INC) -Llib/my -lmy
OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my
	make fclean -C tests
	rm -f $(NAME)

re: fclean all
	make clean
