CC = gcc
FLAGS = -o so_long -g -framework OpenGL -framework AppKit -L./minilibx -lmlx
RMFOR1337 = rm -rf a.out
RM = @rm -rf
BSRC = $(shell find bonus/mainfiles -name "bonus*.c") 

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

all:
	@echo $(B)[--Derleme Basladi...]$(B)
	$(CC) ./mainfiles/*.c $(FLAGS)
	make -C ./mainfiles
	@echo $(B)[--Derleme BITTI...]$(B)

bonus:
	$(CC) ./bonus/mainfiles/*.c $(FLAGS)
	make -C ./bonus/
	@echo $(G)ALERT [PLS go to directory bonus --- "cd ./bonus" and type for run -- "./so_long_bonus ../map/mapchose.ber"]$(G)
	$(RMFOR1337)
	
bonusfclean:
	$(RM) ./bonus/so_long_bonus ./bonus/so_long_bonus.dSYM
	$(RM) ./bonus/mainfiles/*.o ./bonus/mainfiles/mainfiles
	$(RM) ./bonus/minilibx/*.o
	@echo $(R)Removed [TEMPORARY FILES]$(X)
	@echo $(R)Removed [./mainfiles/*.o]$(X)
	@echo $(R)Removed [./minilibx/*.o]$(X)
	@echo $(R)Removed [REMOVED FINISH]$(X)
	@echo $(R)Removed [REMOVED FINISH]$(X)
	@echo $(R)Removed [REMOVED FINISH]$(X)
fclean:
	$(RM)  so_long so_long.dSYM
	$(RM) ./mainfiles/*.o ./mainfiles/mainfiles
	$(RM) ./minilibx/*.o
	$(RM) ./bonus/so_long_bonus
	$(RM) ./bonus/so_long_bonus.dSYM
	@echo $(B)Removed [TEMPORARY FILES]$(X)
	@echo $(R)Removed [./mainfiles/*.o]$(X)
	@echo $(R)Removed [./minilibx/*.o]$(X)
	@echo $(R)Removed [REMOVED FINISH]$(X)
	@echo $(R)Removed [REMOVED FINISH]$(X)
	@echo $(R)Removed [REMOVED FINISH]$(X)
%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

norm:
	@echo $(B)[--NORMINETTE SUCCES %100 CLEAN CODE...]$(B)
	norminette $(shell find ./mainfiles/ -name "*.c")
.PHONY: re norm fclean clean bonus bonusfclean all
