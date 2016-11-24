#include <wolf.h>

void	clean_window(t_env *e)
{
	int	x;
	int	y;

	y = -1;
	while (++y < Y_WIN)
	{
		x = -1;
		while (++x < e->img->size_line)
		{
			e->img->data[y * e->img->size_line + x] = 0;
		}
	}
}
