##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

DSRC	=	$(realpath ../src)/
FUNC	=	$(DSRC)/functions/
SRC     =	$(FUNC)swap.c \
		$(FUNC)rotate.c \
		$(FUNC)tools.c
DSRC_UT	=	$(realpath .)
SRC_UT	=	$(DSRC_UT)/test-sort.c
INC	=	$(realpath ../include)
NAME	=	units
CFLAGS	=	-Wall -W -Wextra -I$(INC)
LDFLAGS	=	-lcriterion -lgcov
OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f *.gcno
	rm -f *.gcna
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	make clean
