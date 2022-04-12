/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:16:10 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:26:50 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
		dest[j] = '\0';
	return (dlen + slen);
}
/*
int    main()
{
  char  dest[10] = "fatma";
  char  src[10] = "ozturk";
  
  printf("String before concatenation: \"%s\"\n", dest);
  printf("\n%d\n", ft_strlcat(dest, src, 8));
  printf("\nString after concatenation: \"%s\"\n", dest);
}

 dst nin sonuna src stringini ekler. 
en fazla dstsize -strlen(dst)-1 karakter ekler.
 * dstsize ın 0 olması ve dst string in dstsizedan uzun olması
 (pratikte böyle bir şey olamaz ya dstsize yanlıştır ya da 
 dst düzgün bir string değildir)durumları hariç NULL sonlanır.
 * return de destin son uzunluğu + src nin birleştiremediği kısmının
  uzunluğunu dönüyor yani ikisinin en baştaki toplam uzunluğunu dönüyor. */
