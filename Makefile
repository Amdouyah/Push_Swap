NAME = push_swap

CC = gcc 

FLAGS = -Wall -Wextra -Werror

SRC = push_swap.c \
 	 func.c \
	 checkarg.c
OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all

