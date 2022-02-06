#include <unistd.h>
#include <stdio.h>

int	sayici(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	i++;
return(i);	
}
int	sayikontrol(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{	
			if(str[i] >= '0' && str[i] <= '9')
				return 1;
		i++;
	}
	return 0;
}
void	ft_putstr(char *str)
{
		int i = 0;
		while(str[i] != '\0')
		{
			write(1,&str[i],1);
			i++;
		}
}
int	main(int argc, char **argv)
{
	int kacharf;
	int i = 0;
	kacharf = sayici(argv[1]);
	if(sayikontrol(argv[1]) == 1)
		ft_putstr(argv[1]);
	else{
	
		if(kacharf < 4)
		{
			while(argv[1][i] != '\0')
			{
			
				if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
					argv[1][i+1] -= 32;
				else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i+1] +- 32;
				write(1,&argv[1][i],1);
				i++;
			}
		}
		else if(kacharf > 3 && kacharf < 7)
		{
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
					argv[1][i] += 32;
				write(1,&argv[1][i],1);
				i++;
			}
		}
		else if(kacharf >= 7)
		{
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
					argv[1][i] -= 32;
				write(1,&argv[1][i],1);
				i++;
			}
		}
	}
	write(1,"\n",1);
	return 0;
}
