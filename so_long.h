/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:31:16 by muhozkan          #+#    #+#             */
/*   Updated: 2022/04/13 01:31:56 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

//KUTUPHANE
# include <stdio.h>
# include <unistd.h>
# include "MinilibX/mlx.h"
# include "libft/libft.h"

//STRUCT
typedef	struct	s_wlx
{
	void	*mlx;
	void	*win;
}				t_wlx;

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
int		game_exit(int key_code, t_wlx *wlx);

#endif
