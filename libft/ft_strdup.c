/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:15:36 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:26:32 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*p1;
	size_t	index;

	index = 0;
	i = ft_strlen(str);
	p1 = malloc(sizeof(char) * (i + 1));
	if (!p1)
		return (NULL);
	while (str[index])
	{
		p1[index] = str[index];
		index++;
	}
	p1[index] = '\0';
	return (p1);
}

// sonuna '\0' koyabilmek icin + 1 ekledik
/*
 s1 stringi için hafızada yeterli alan tahsis eder,
  kopyalamayı yapar ve ona bir pointer döndürür.
 * * yeterli hafıza yoksa NULL döner.
 * duplicate edilecek alan için yer ayırt eder 
 * s1 in eleman sayısı +1 kadar.
 * s1 i dup içine kopylara ve s1 in aynısından oluşmuş olur */
