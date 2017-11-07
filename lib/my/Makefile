SRC	=	my_putchar.c \
		my_putstr.c \
		my_puterror.c \
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

PROTO	=	my.h

NAME	=	libmy.a


all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	#cp $(NAME) ..
	cp $(PROTO) ../../include

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all clean
