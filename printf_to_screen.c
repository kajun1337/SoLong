#include "./includes/so_long.h"

void *put_image(t_image image)
{
	image.img = mlx_xpm_file_to_image(image.wlx.mlx, image.relative_path, &image.img_width, &image.img_height);
	mlx_put_image_to_window(image.wlx.mlx, image.wlx.win, image.img, image.x, image.y);
	return (image.img);
}
void yaz (char area, t_image image)
{
	if (area == '1')
	{
		image.relative_path = "./img/arkaplan.xpm";
		put_image(image);
	}
	if (area == 'P')
	{
		image.relative_path = "./img/a.xpm";
		put_image(image);
	}
	if (area == 'C')
	{
		image.relative_path = "./img/s400.xpm";
		put_image(image);
	}
	if (area == '0')
	{
		image.relative_path = "./img/duvar.xpm";
		put_image(image);
	}
}
void create_map(t_game wlx, t_platform platform)
{
	int		fd;
	char 	*area;
	int		i;
	int j = 0;
	fd = open(platform.path, O_RDONLY);
	i = 0;
	while (i < 9999)
	{
		j = 0;
		area = get_next_line(fd);
		if (area == NULL)
			break;
		while(area[j])
		{	
			t_image image;
			image.wlx = wlx;
			image.x = j * 48;
			image.y = i * 48;
			yaz(area[j],image);
			j++;
		}
		i++;
	}
	close(fd);
}