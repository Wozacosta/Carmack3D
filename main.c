/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:49:53 by srabah-m          #+#    #+#             */
/*   Updated: 2016/11/21 22:02:14 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <wolf.h>

static int	init_env(t_env *e);
static int	init_img(t_env *e);
static void	ft_usage(void);

int			main(int ac, char **av)
{
	// Env structure
	// Pointeur sur mlx / window / image
	// Contient la map & position jouer et position camera
	t_env	e;

	if (ac == 1)
		ft_usage();
	
	// Lis le fichier et rempli e->map[x][y] ligne par ligne
	// map[x][y] = 0 --> vide
	// map[x][y] = 1 --> mur couleur A
	// map[x][y] = 2 --> mur couleur B
	// etc...
	startup(&e, av[1]);

	//Initialise mlx et rempli les parametre du t_env e
	//avec position de depart et parametre de jeu (speed, angle de rotation,
	//couleur floor et couelru roof)
	init_env(&e);

	// Display loop
	// Lis la map dans map[x][y] et dessine en fonction de la map
	display_loop(&e);
	// voir lib en ligne sur l'expose mlx
	mlx_expose_hook(e.win, manage_expose, &e);
	// handle les key events
	mlx_key_hook(e.win, manage_key, &e);
	// main mlx loop, fait tourner la loop principale et attend les input,
	// a chaque input le keyhook change les param de e 
	// et l'expose hook redessine la page
	mlx_loop(e.mlx);
	return (0);
}

static void	ft_usage(void)
{
	ft_putendl_fd("\x1b[31mUsage:\x1b[0m ./wolf3d [file.map]", 2);
	exit(0);
}

static int	init_env(t_env *e)
{
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, X_WIN, Y_WIN, "wolf3D");
	e->pos_x = 14;
	e->pos_y = 17;
	e->dir_x = -1;
	e->dir_y = 0;
	e->plane_x = 0;
	e->plane_y = 0.65;
	e->rot_angle = 0.199;
	e->speed = 0.699;
	e->color_floor = mlx_get_color_value(e->mlx, 0xFFFFFF);
	e->color_roof = mlx_get_color_value(e->mlx, 0xFFC300);
	init_img(e);
	return (1);
}

// Initialise une image mlx
static int	init_img(t_env *e)
{
	t_img	*img;

	e->img = (t_img *)malloc(sizeof(t_img));
	img = e->img;
	img->ptr = mlx_new_image(e->mlx, X_WIN, Y_WIN);
	img->data = mlx_get_data_addr(img->ptr,
			&(img->bpp), &(img->size_line), &(img->endian));
	return (1);
}

