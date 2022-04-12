/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:17:58 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:27:33 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_start(const char *s, const char *set)
{
	int	i;
	int	j;

	j = 0;
	while (s[j])
	{
		i = 0;
		while (set[i])
		{
			if (s[j] == set[i])
			{
				j++;
				break ;
			}
	i++;
		}
		if (!set[i])
			break ;
	}
	return (j);
}

static int	ft_trim_end(const char *s, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
			{
				i--;
				break ;
			}
	j++;
		}
		if (!set[j])
			break ;
	}
	return (i);
}

char	*ft_strtrim(const char *s, const char *set)
{
	int		i;
	int		j;
	int		index;
	char	*ptr;

	ptr = NULL;
	if (s && set)
	{
		i = ft_trim_end(s, set);
		j = ft_trim_start(s, set);
		if (i < j)
			return (ft_strdup(""));
		ptr = malloc(sizeof(char) * ((i + 1) - j + 1));
		if (!ptr)
			return (NULL);
		index = 0;
		while (j <= i)
		{
			ptr[index] = s[j];
			index++;
			j++;
		}
		ptr[index] = '\0';
	}
	return (ptr);
}
/*  s stringini başındaki ve sonundaki (set içinde belirtilen)
 karakterler olmadan yazar. s stringine hafızada yer tahsis eder.
 *  eğer başta ve sonda set yoksa direkt s stringi kopyasını döner.
 *  yeterli bellek yoksa fonksiyon NULL döner.

int	main()
{
	printf("%s", ft_strtrim("xyhelloz", "xyz"));
}
*/
