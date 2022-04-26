/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:04:17 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/26 01:04:17 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	update(t_game *game, int x, int y)
{
	t_image	image;

	image.relative_path = "./img/floor.xpm";
	image.wlx = *game;
	put_image(image, game->player.x, game->player.y);
	put_image(image, x, y);
}

void	message(char *msg, t_game *game)
{
	printf("%s", msg);
	map_destroy(game);
	exit(0);
}

int	key_check(int key_code, t_game *game)
{
	if (key_code == ESC)
		destroy_window(game);
	if (key_code == UP)
		up(game);
	if (key_code == RIGHT)
		right(game);
	if (key_code == LEFT)
		left(game);
	if (key_code == DOWN)
		down(game);
	return (0);
}

void	baslangic(t_game *game)
{
	game->coincheck = 0;
	game->exitcheck = 0;
	game->player.coin = 0;
	game->player.hareket = 0;
	game->playercheck = 0;
	game->enemycheck = 0;
	game->enemyspeed = 0;
	game->enemyindex = 0;
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		message(RED"Sadece 2 arguman girebilirsin\n", &game);
	ft_window_size(&game, argv);
	game.mlx = mlx_init();
	game.window = mlx_new_window(game.mlx, game.size_x, game.size_y, "Kajun1337-Gaming");
	baslangic(&game);
	create_map_line(&game, argv);
	game_control(&game);
	mlx_hook(game.window, 17, 1L << 2, destroy_window, &game);
	mlx_key_hook(game.window, key_check, &game);
	mlx_loop_hook(game.mlx, anim, &game);
	mlx_loop(game.mlx);
}
