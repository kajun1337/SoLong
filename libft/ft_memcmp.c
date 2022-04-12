/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:12:30 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:14 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
	i++;
	}
	return (0);
}

/*
s1 string byte ını s2 string byte ı ile karşılaştırır. İki string uzunluğu
da n byte uzunluğunda farz edilir. İki string aynıysa sıfır döndürür 
aksi takdirde ilk iki byte arasındaki farkı döndürür.
Unsigned char değerleri gibi davranır. 
int	main()
{
	printf("%d", ft_memcmp("fatma", "ozturk", '5'));
}
*/
