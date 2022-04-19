/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:12:41 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:25:19 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if (!dest && !src)
		return (0);
	str1 = dest;
	str2 = src;
	while (n-- > 0)
	{
		*str1++ = *str2++;
	}
	return (dest);
}
/*
src hafıza bölgesinden n byte ı dst hafıza bölgesine kopyalar. 
dst ve src çakışırsa tanımsız olur. 

#include <stdio.h>

int	main()
{
	unsigned char	src[] = " world!";
	unsigned char	dst[] = "hello";

	ft_memcpy(dst+5, src, 8);
	printf("%s", dst);
}
*/
