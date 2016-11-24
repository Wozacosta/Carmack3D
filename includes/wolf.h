/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 20:03:13 by srabah-m          #+#    #+#             */
/*   Updated: 2016/11/21 21:50:32 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WOLF_H
# define WOLF_H

# include <stdio.h>
# include <stdlib.h>
# include <libft.h>
# include <mlx.h>
# include <math.h>
# include <get_next_line.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define MAP_WIDTH	24
# define MAP_HEIGHT	24
# define X_WIN		1000
# define Y_WIN		700

typedef struct	s_img
{
	void	*ptr;
	char	*data;
	int		bpp;
	int		size_line;
	int		endian;
}				t_img;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
	t_img	*img;
	int		map[MAP_WIDTH][MAP_HEIGHT];
	double	pos_x;
	double	pos_y;
	double	dir_x;
	double	dir_y;
	double	plane_x;
	double	plane_y;
	double	time;
	double	old_time;
	double	rot_angle;
	double	speed;

	double	camera_x;
	double	ray_pos_x;
	double	ray_pos_y;
	double	ray_dir_x;
	double	ray_dir_y;
	int		map_x;
	int		map_y;
	double	side_dist_x;
	double	side_dist_y;
	double	delta_dist_x;
	double	delta_dist_y;
	double	perp_wall_dist;
	int		step_x;
	int		step_y;
	int		side;
	int		display_start;
	int		display_end;
	int		color_floor;
	int		color_roof;
}				t_env;

void	startup(t_env *e, char *file);
int		manage_key(int keycode, t_env *env);
int		manage_expose(t_env *env);
int		display_loop(t_env *e);
void	clean_window(t_env *e);
void	key_down(t_env *e);
void	key_up(t_env *e);
void	key_left(t_env *e);
void	key_right(t_env *e);
void	ft_fatal(char *error_msg);
void	dfa(t_env *e);

#endif /* !WOLF_H */
