CC = gcc
FLAGS = -framework OpenGL -framework Appkit -L./minilibx -lmlx

all:
	$(CC) *.c $(FLAGS)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
fclean:
	rm -rf a.out