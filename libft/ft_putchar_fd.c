/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:13:16 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:35 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
