

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCE  =  src/move/*.c \
		   src/main.c \
		   src/sort/*.c \
		   src/check/*.c\

$(NAME):
	$(CC) $(FLAGS) $(SOURCE) -Iincludes -o $(NAME) 

#-fsanitize=address -static-libasan -g

all: $(NAME)

clean:
	@rm -rf src/*.o
	@rm -rf src/move/*.o
	@rm -rf sources/sorting/*.o
	@rm -rf sources/utils/*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all