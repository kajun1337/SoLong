/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:12:17 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:09 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pts;
	unsigned char	cc;

	pts = (void *)s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if ((pts[i] - cc) == 0)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
  int	main(void)
{
	printf("%s", ft_memchr("fatma", 'm', 5));
}
 verilen byte kadar kısmı kontrol edip orada aradığımız karakter var mı
  diye bakar.
 * aradığımız karakterden sonrasını çıktı veriri 
 bir stringdeki bir kelimenin bellekteki değerini döndürür */
