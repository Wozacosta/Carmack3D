#include <wolf.h>

int	manage_expose(t_env *e)
{
	mlx_put_image_to_window(e->mlx, e->win, e->img->ptr, 0, 0);
	return (1);
}
