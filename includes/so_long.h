/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:31:16 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/18 15:43:59 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

//KUTUPHANE
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../MinilibX/mlx.h"
# include "../necessary/libft/libft.h"
# include "get_next_line.h"

//RENKLENDIRCI
# define RED	"\033[1m\033[31m"
# define GREEN	"\033[1m\033[32m"
# define ENDC	"\033[0m"

//STRUCT
typedef	struct	s_game
{
	void	*mlx;
	void	*win;
}				t_game;

typedef struct s_image
{
	char*				relative_path;
	struct s_game		wlx;
	void 				*img;
	int					x;
	int 				y;
	int					img_height;
	int					img_width;
}	t_image;

typedef struct s_platform
{
	char	**map;
	int		pos_x;
	int		pos_y;
	int		height;
	int		width;
	int		multiple;
	char	*path;
}	t_platform;

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

//FONKSIYON
int		game_exit(int key_code, t_game *wlx);
int		main(void);
void 	*myfree(void *str);
void 	create_map(t_game wlx, t_platform platform);
void 	*put_image(t_image image);
char *get_next_line(int fd);


#endif
