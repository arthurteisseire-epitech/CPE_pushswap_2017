##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath src)/
DLIB	=	$(realpath lib/my)
INC	=	$(realpath include)
LIB	=	my
LIBS	=	-L$(DLIB) -l$(LIB)
DTOOLS	=	$(DSRC)lk_tools/
SRC     =	$(DSRC)main.c \
		$(DSRC)array_to_lk_list.c  \
		$(DTOOLS)r.c \
		$(DTOOLS)rr.c \
		$(DTOOLS)s.c \
		$(DTOOLS)p.c
CFLAGS	=	-Wall -W -Wextra -I$(INC) -ggdb3
OBJ	=	$(SRC:.c=.o)
NAME	=	push_swap

all: $(NAME)

$(NAME):	$(OBJ)
	make -C $(DLIB)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(DLIB)
	rm -f $(NAME)

re: fclean all
	make clean
