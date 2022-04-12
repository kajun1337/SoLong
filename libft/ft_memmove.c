/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:12:54 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:24 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	else if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		d = (unsigned char *)dest;
		s = (const unsigned char *)src;
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

// memcpy'den farkı çakışmaları önler
/* src stringinin len byte ını dst stringine kopyalar. 
Stringler çakışırsa kopyalamaya sondan başlar 
böylece src yi destroy etmemiş olur. dst - src < len derken 
 aslında normalde kaybolacak karaktere kadar kopyalamakta sorun yok. 
 mesela src +3 ten itibaren src nin 2 karakterini alırsak
  src yi bozmadan zaten kopyalama yapmış oluyoruz. src + 3 ten itibaren 4
   karakter alsak src + 3 ten sonrasını değiştireceği için
    aradakiler bozulmaya uğrar.  

#include <stdio.h>

int	main()
{
	unsigned char	src[] = "hello";

	ft_memmove(src + 3, src,2 );
	printf("%s", dst);
}
*/
