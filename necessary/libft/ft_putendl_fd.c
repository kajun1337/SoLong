/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:13:31 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:42 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include "fcntl.h" eklenmeli
int main(int argc, char const *argv[])
{
	int fd = open("txt",O_WRONLY);
	ft_putchar_fd('c',fd);
	return 0;
}
*/
