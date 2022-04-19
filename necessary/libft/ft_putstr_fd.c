/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:14:55 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:55 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		write(fd, "(NULL)", 6);
	else
		write(fd, s, ft_strlen(s));
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
