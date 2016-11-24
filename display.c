#include <wolf.h>

static void	init_calculation(int x, t_env *e);
static void	display_line(int x, t_env *e);
static void	get_line_dimensions(t_env *e);
static int	get_color(t_env *e);

int			display_loop(t_env *e)
{
	int		x;

	x = -1;
	while (++x < X_WIN)
	{
		// met a jour param de la camera
		init_calculation(x, e);
		// calcule la ligne (voir cour sur raytracer en ligne) (--> le point e)
		// renome dfa, plus idee de la signification de dfa
		dfa(e);
		// trace la ligne x--e
		display_line(x, e);
	}
	mlx_put_image_to_window(e->mlx, e->win, e->img->ptr, 0, 0);
	return (1);
}

static void	display_line(int x, t_env *e)
{
	int		color;
	char	*data;
	int		i;
	int		j;

	get_line_dimensions(e);
	color = get_color(e);
	data = e->img->data;
	i = x * e->img->bpp / 8;
	j = -1;
	while (++j < e->display_start)
		ft_memcpy(&data[j * e->img->size_line + i],
			&(e->color_roof), e->img->bpp / 8);
	while (e->display_start <= e->display_end)
	{
		ft_memcpy(&data[e->display_start * e->img->size_line + i],
			&color, e->img->bpp / 8);
		e->display_start += 1;
	}
	while (e->display_start < Y_WIN)
	{
		ft_memcpy(&data[e->display_start * e->img->size_line + i],
			&(e->color_floor), e->img->bpp / 8);
		e->display_start += 1;
	}
}

static int	get_color(t_env *e)
{
	int	nb;
	int	color;

	nb = e->map[e->map_x][e->map_y];
	if (nb == 1)
		color = mlx_get_color_value(e->mlx, 0xFFC300);
	else if (nb == 2)
		color = mlx_get_color_value(e->mlx, 0x86F33F);
	else if (nb == 3)
		color = mlx_get_color_value(e->mlx, 0xC23FF3);
	else if (nb == 4)
		color = mlx_get_color_value(e->mlx, 0x6D3FF3);
	else
		color = mlx_get_color_value(e->mlx, 0xFFFFFF);
	if (e->side == 1)
		color /= 2;
	e->color_floor = mlx_get_color_value(e->mlx, 0x581845);
	e->color_roof = mlx_get_color_value(e->mlx, 0xC70039);
	return (color);
}

static void	get_line_dimensions(t_env *e)
{
	int		line_height;

	if (e->side == 0)
		e->perp_wall_dist = fabs((e->map_x
			-e->ray_pos_x + (1 - e->step_x) / 2) / e->ray_dir_x);
	else
		e->perp_wall_dist = fabs((e->map_y
			- e->ray_pos_y + (1 - e->step_y) / 2) / e->ray_dir_y);
	line_height = abs((int)(Y_WIN / e->perp_wall_dist));
	e->display_start = -line_height / 2 + Y_WIN / 2;
	if (e->display_start < 0)
		e->display_start = 0;
	e->display_end = line_height / 2 + Y_WIN / 2;
	if (e->display_end >= Y_WIN)
		e->display_end = Y_WIN - 1;
}

static void	init_calculation(int x, t_env *e)
{
		e->camera_x = ((2 * x) / (double)X_WIN) - 1;
		e->ray_pos_x = e->pos_x;
		e->ray_pos_y = e->pos_y;
		e->ray_dir_x = e->dir_x + e->plane_x * e->camera_x;
		e->ray_dir_y = e->dir_y + e->plane_y * e->camera_x;
		e->map_x = (int)e->ray_pos_x;
		e->map_y = (int)e->ray_pos_y;
		e->delta_dist_x = sqrt(1 + (e->ray_dir_y * e->ray_dir_y)
				/ (e->ray_dir_x * e->ray_dir_x));
		e->delta_dist_y = sqrt(1 + (e->ray_dir_x * e->ray_dir_x)
				/ (e->ray_dir_y * e->ray_dir_y));
}

