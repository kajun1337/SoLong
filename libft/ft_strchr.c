/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:15:24 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:40:19 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)&str[index]);
		index++;
	}
	if (c == '\0')
		return ((char *)(str + index));
	return (NULL);
}

/*
int	main()
{
	printf("%s", ft_strchr("fatma", 'm'));
}
 Stringte int c yerine verdiğimiz karakterin 
ilk göründüğü yeri belirler ve oradan sonra çıktı verir. */
