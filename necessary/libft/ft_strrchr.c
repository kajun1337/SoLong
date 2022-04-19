/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:17:46 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:27:27 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (((char *)str) + i);
		}
		i--;
	}
	return (NULL);
}

// sagdan baslayarak istedigimiz harfi bulur ve kelimeyi döndürür
/*
int	main()
{
	printf("%s", ft_strrchr("fatmaozturk", 'a'));
}
int c yerine yazdığımız karakterin son göründüğü yeri belirler.
 * s nin point ettiği ilk karakteri kaybetmemek için oraya b pointerını atıyoruz.
  syi de s nin son elemanını point edecek şekilde atıyoruz.
 * s pointerını c karakterine rastlayana kadar sondan başa doğru gezdiriyoruz.
 * c yi bulduğunda point ettiği yerden itibaren outpu verir. 
 * */
