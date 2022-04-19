/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:37:27 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/18 15:05:17 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/so_long.h"

int	game_exit(int key_code, t_game *wlx)
{
	if (key_code == 53)
	{
		mlx_destroy_window(wlx->mlx, wlx->win);
		printf(RED"Pencere Kapandı\n"ENDC);
		exit (0);
	}
	return (0);
}
