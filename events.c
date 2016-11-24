/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:58:51 by srabah-m          #+#    #+#             */
/*   Updated: 2016/11/21 21:30:22 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <wolf.h>

int		manage_key(int keycode, t_env *env)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 0 || keycode == 123)
		key_left(env);
	else if (keycode == 13 || keycode == 126)
		key_up(env);
	else if (keycode == 2 || keycode == 124)
		key_right(env);
	else if (keycode == 1 || keycode == 125)
		key_down(env);
	clean_window(env);
	display_loop(env);
	return (0);
}

void	key_up(t_env *e)
{
	if (e->map[(int)(e->pos_x + e->dir_x * e->speed)][(int)(e->pos_y)] == 0)
	{
		e->pos_x += e->dir_x * e->speed;
	}
	if (e->map[(int)(e->pos_x)][(int)(e->pos_y + e->dir_y * e->speed)] == 0)
	{
		e->pos_y += e->dir_y * e->speed;
	}
}

void	key_down(t_env *e)
{
	if (e->map[(int)(e->pos_x - e->dir_x * e->speed)][(int)(e->pos_y)] == 0)
	{
		e->pos_x -= e->dir_x * e->speed;
	}
	if (e->map[(int)(e->pos_x)][(int)(e->pos_y - e->dir_y * e->speed)] == 0)
	{
		e->pos_y -= e->dir_y * e->speed;
	}
}

void	key_right(t_env *e)
{
	double	old_dir_x;
	double	old_plane_x;

	old_dir_x = e->dir_x;
	e->dir_x = e->dir_x
		* cos(-(e->rot_angle)) - e->dir_y * sin(-(e->rot_angle));
	e->dir_y = old_dir_x
		* sin(-(e->rot_angle)) + e->dir_y * cos(-(e->rot_angle));
	old_plane_x = e->plane_x;
	e->plane_x = e->plane_x
		* cos(-(e->rot_angle)) - e->plane_y * sin(-(e->rot_angle));
	e->plane_y = old_plane_x
		* sin(-(e->rot_angle)) + e->plane_y * cos(-(e->rot_angle));
}

void	key_left(t_env *e)
{
	double	old_dir_x;
	double	old_plane_x;

	old_dir_x = e->dir_x;
	e->dir_x = e->dir_x * cos(e->rot_angle) - e->dir_y * sin(e->rot_angle);
	e->dir_y = old_dir_x * sin(e->rot_angle) + e->dir_y * cos(e->rot_angle);
	old_plane_x = e->plane_x;
	e->plane_x = e->plane_x
		* cos(e->rot_angle) - e->plane_y * sin(e->rot_angle);
	e->plane_y = old_plane_x
		* sin(e->rot_angle) + e->plane_y * cos(e->rot_angle);
}
