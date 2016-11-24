#include <wolf.h>

static int	load_file(char *file);
static void	fill_row(t_env *e, int y, char *str);

void		startup(t_env *e, char *file)
{
	int		fd;
	char	*str;
	int		y;

	fd = load_file(file);
	y = 0;
	while ((get_next_line(fd, &str) > -1) && y < MAP_HEIGHT)
	{
		fill_row(e, y, str);
		y++;
	}
}

static void	fill_row(t_env *e, int y, char *str)
{
	int	x;

	x = -1;
	while (++x < MAP_WIDTH)
	{
		e->map[x][y] = (*str) - '0';
		str += 2;
	}
}

static int	load_file(char *file)
{
	int	fd;

	if (ft_strstr(file, ".map") == NULL)
		ft_fatal("\x1b[31mERROR:\x1b[0m File not in the correct format");
	if ((fd = open(file, O_RDONLY)) == -1)
		ft_fatal("\x1b[31mERROR:\x1b[0m Can't open the file");
	return (fd);
}
