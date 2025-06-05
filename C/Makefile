SRC1 = Colleen/Colleen.c
SRC2 = Grace/Grace.c
SRC3 = Sully/Sully.c

OBJ1 = $(SRC1:%.c=%.o)
OBJ2 = $(SRC2:%.c=%.o)
OBJ3 = $(SRC3:%.c=%.o)

NAME = dr_quine_c

NAME1 = Colleen/Colleen
NAME2 = Grace/Grace
NAME3 = Sully/Sully

CC = gcc
FLAGS_CC = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(NAME1) $(NAME2) $(NAME3)

$(NAME1): $(OBJ1)
	$(CC) $(FLAGS_CC) -o $@ $^
$(NAME2): $(OBJ2)
	$(CC) $(FLAGS_CC) -o $@ $^
$(NAME3): $(OBJ3)
	$(CC) $(FLAGS_CC) -o $@ $^

%.o: %.c
	$(CC) $(FLAGS_CC) -c -o $@ $<

clean:
	@rm -f $(OBJ1) $(OBJ2) $(OBJ3)

fclean: clean
	@rm -f $(NAME1) $(NAME2) $(NAME3)

re: fclean all
