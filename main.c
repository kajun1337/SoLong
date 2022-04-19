/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:57:01 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/18 17:50:47 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

int	main(void)
{
	t_game	game;
	t_platform a;
	a.path = "./map/map.ber";
	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, 1920, 1080, "Hello world!");
	mlx_hook(game.win, ON_KEYDOWN, 1L<<0, game_exit, &game);
	create_map(game,a);
	create_map(game,a);
	mlx_loop(game.mlx);
}
