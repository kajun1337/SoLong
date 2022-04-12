/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:15:57 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:26:43 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	j;
	char	*s3;

	index = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (s1[index])
	{
		s3[index] = s1[index];
		index++;
	}
	while (s2[j])
	{
		s3[index++] = s2[j];
		j++;
	}
	s3[index] = '\0';
	return (s3);
}
/*
int	main()
{
	printf("%s", ft_strjoin("fatma", "ozturk"));
}
*/
