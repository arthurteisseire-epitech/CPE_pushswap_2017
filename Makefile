##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
DSRC	=	$(realpath src)/
INC	=	$(realpath include)
DTOOLS	=	$(DSRC)lk_tools/
SRC     =	$(DSRC)main.c \
		$(DSRC)array_to_lk_list.c  \
		$(DSRC)free_lk_list.c  \
		$(DSRC)sort.c  \
		$(DSRC)my_atoi.c  \
		$(DSRC)my_alloc.c  \
		$(DTOOLS)r.c \
		$(DTOOLS)rr.c \
		$(DTOOLS)s.c \
		$(DTOOLS)p.c
CFLAGS	=	-Wall -W -Wextra -I$(INC) -ggdb3
OBJ	=	$(SRC:.c=.o)
NAME	=	push_swap

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
