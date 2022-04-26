/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:05:11 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/26 01:05:15 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# define RED	"\033[1m\033[31m"
# define GREEN	"\033[1m\033[32m"
# define ENDC	"\033[0m"
# define BOLDRED    "\033[31m"
# define UP		13
# define DOWN	1
# define LEFT	0
# define RIGHT	2
# define ESC	53
# define SIZE   48

# include "../../minilibx/mlx.h"

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_player
{
	int		x;
	int		y;
	int		coin;
	int		hareket;

}			t_player;

typedef struct s_game
{
	void			*mlx;
	void			*window;
	char			**map;
	int				coincheck;
	int				playercheck;
	int				exitcheck;
	int				enemycheck;
	unsigned long	size_x;
	int				size_y;
	int				enemyspeed;
	int				enemyindex;
	void			*enemy[2];
	int				random;
	t_player		player;
}					t_game;

typedef struct s_image
{
	char				*relative_path;
	struct s_game		wlx;
	void				*img;
	int					img_height;
	int					img_width;
}						t_image;

typedef struct s_block
{
	char	*name;
	char	*relative_path;
}	t_block;

size_t	ft_strlen(const char *str);
t_block	set_block(char name);

int		key_check(int key_code, t_game *game);
int		destroy_window(t_game *game);
int		ft_line_length(int fd);
int		ft_count_lines(int fd);
char	*ft_itoa(int n);

void	baslangic(t_game *game);
void	move_4(t_game *game, int x, int y);
void	message(char *msg, t_game *game);
void	wall_control(t_game *game);
void	map_control(t_game *game);
void	game_control(t_game *game);
int		move_check(t_game *game, int i, int j);
void	ft_window_size(t_game *data, char **argv);
void	*myfree(void *str);
void	*put_image(t_image image, int x, int y);
void	create_map(t_game *game, int i);
void	create_floor(t_game game, int b);
void	create_map_length(char *area, t_game *game, int i);
void	create_map_line(t_game *game, char **argv);
void	update(t_game *game, int x, int y);
void	right(t_game *game);
void	up(t_game *game);
void	down(t_game *game);
void	left(t_game *game);
void	map_destroy(t_game	*game);
void	update2(t_game *game, int x, int y);

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		anim(t_game	*game);
void	move_anim(t_game *game);
void	move_1(t_game *game, int x, int y);

#endif
