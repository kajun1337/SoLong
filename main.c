/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:57:01 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/13 00:27:44 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_wlx	wlx;

	wlx.mlx = mlx_init();
	wlx.win = mlx_new_window(wlx.mlx, 1920, 1080, "Hello world!");
	mlx_hook(wlx.win, ON_KEYDOWN, 1L<<0, game_exit, &wlx);
	mlx_loop(wlx.mlx);
}
