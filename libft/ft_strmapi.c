/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:17:16 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:27:06 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}
/*
int    main()
{
    char    s1[] = "abc";
    char    *s2;
    s2 = ft_strmapi(s1, *f); // printf("%s", ft_strmapi("abc", *f)) bu da olur. 
    printf("%s", s2);
}
/f fonksiyonunu s stringinin her bir karakterine uygular
ve mallocla yer ayırdığımız str ye bu elemanları gönderir
str ye  s nin elemanlarının f fonksiyonu uygulanmış halini gönderiyoruz 28
*/
