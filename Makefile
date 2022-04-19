CC = gcc
FLAGS = -framework OpenGL -framework Appkit -L./minilibx -lmlx
KONTROL = game_exit.c ./necessary/libft ./necessary/get_next_line/get_next_line.c
INCLUDES = ./necessary/get_next_line/get_next_line.c
all:
	$(CC) *.c $(FLAGS) $(INCLUDES) $(info --Derleme Basladi...) $(info  -----Derleme devam ediyor...) $(info --------Derleme Bitti...)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)
fclean:
	rm -rf a.out
norm:
	@norminette $(KONTROL)