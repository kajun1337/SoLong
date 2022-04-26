CC = gcc
FLAGS = -o ./so_long_bonus -g -framework OpenGL -framework AppKit -L../minilibx -lmlx
RM = @rm -rf

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

bonus:
	@echo $(B)[Bonus Linking Started]$(B)
	$(CC) ./mainfiles/*.c $(FLAGS)
	make -C ./mainfiles
	@echo $(B)[--Derleme BITTI...]$(B)

fclean:
	$(RM)  so_long_bonus so_long_bonus.dSYM
	$(RM) ./mainfiles/*.o ./mainfiles/mainfiles
	$(RM) ./minilibx/*.o
	@echo $(R)Removed [TEMPORARY FILES]$(X)
	@echo $(R)Removed [./mainfiles/*.o]$(X)
	@echo $(R)Removed [./minilibx/*.o]$(X)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

bonusnorm:
	@echo $(B)[--NORMINETTE SUCCES %100 CLEAN CODE...]$(B)
	norminette $(shell find ./mainfiles/ -name "*.c")
.PHONY: re
