/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:08:27 by muhozkan          #+#    #+#             */
/*   Updated: 2022/02/23 14:22:58 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, (count * size));
	return (mem);
}
/*
int main(void)
{
  char    *a;
  a = ft_calloc(5, sizeof(char));
  int i = 0;
  while(i < 5)
  {
     printf("%d", a[i]);
     i++;
  }
}
count nesneleri için bitişik olarak yeterli hafıza tahsis eder ve
bir pointer döndürür.
bu alan sıfır değeri byte ı ile doldurulur.
size atayacağımız değişkenin türüne göre değişir. mesela charsa
size 1 olur int ise
size 2 olur.count ise sayısı yani iki tane char tipi değişken
için ayıracağımız alan 2*1 olacak.
ayırdığımız hafıza alanını byte a attık ve bu alanları null ile doldurduk.
bize null ile doldurulmuş byte pointerının adresini dönüş yaptı.
malloc sadece yer ayırır , ayırdığı yerin null olduğu garantisini vermez.
 calloc  yer ayırır ve orayı null yapar
 */
