NAME=libmlx.a
SRC= mlx_shaders.c mlx_new_window.m mlx_init_loop.m mlx_new_image.m mlx_xpm.c mlx_int_str_to_wordtab.c
SRC+= mlx_png.c mlx_mouse.m
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)
CFLAGS+=-O2

# colors for printing
Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

# changed the following 8 lines to silence all the warnings created
%.o : %.c
	@cc -O2 -w -DSTRINGPUTX11   -c -o $@ $<
	@printf $(UP)$(CUT)
	@echo $(Y)Compiling [$<]...$(X)
%.o : %.m
	@cc -O2 -w -DSTRINGPUTX11   -c -o $@ $<
	@printf $(UP)$(CUT)
	@echo $(Y)Compiling [$<]...$(X)

# add to match string put with X11 in size and position
CFLAGS+= -DSTRINGPUTX11

all: $(NAME)

$(NAME): $(OBJ)
	@printf $(UP)$(CUT)
	@echo $(Y)Compiling [$(NAME)]...$(X)
	@ar -r $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(G)Finished [$(NAME)]$(X)

clean:
	@rm -f $(OBJ)
	@echo $(R)Removed [$(OBJ)]$(X)

fclean: clean
	@rm -f $(NAME) *~
	@rm -f mlx_app
	@echo $(R)Removed [$(NAME)]$(X)

re: clean all
