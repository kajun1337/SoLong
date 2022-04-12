/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:08:11 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:38:43 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*asdf;

	i = 0;
	asdf = (char *)s;
	while (i < n)
	{
		asdf[i] = 0;
		i++;
	}
	s = asdf;
}

/*
 ft_memset(s, 0, n);
 n sıfırlanmış byte ı s stringine yazar. n sıfırsa hiçbir şey yapmaz. 

#include <stdio.h>

int	main()
{
unsigned char	s[] = "fatma";
ft_bzero(s, 3);
printf("%s", s);
}
*/
