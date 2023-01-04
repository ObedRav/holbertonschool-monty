CC = gcc
SPC = *.c
OBJ = $(SRC:.c=.o)
NAME = hsh
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all:
	$(CC) $(SPC) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: oclean clean