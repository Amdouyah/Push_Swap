NAME = push_swap

CC = gcc 

FLAGS = -Wall -Wextra -Werror

SRC = push_swap.c \
 	 func.c \
	 checkarg.c \
	 push.c \
	 rev_rotate.c \
	 rotate.c \
	 swap.c \
	 allocate.c \
	 help.c \
	 range.c \
	 sorting.c \
	 check_errors.c


all : $(NAME)

# substitu
$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean

re : fclean all

