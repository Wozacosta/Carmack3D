/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfa.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:51:37 by srabah-m          #+#    #+#             */
/*   Updated: 2014/01/15 20:23:27 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <wolf.h>

static void		init_dfa(t_env *e);

void			dfa(t_env *e)
{
	int	hit;

	init_dfa(e);
	hit = 0;
	while (hit == 0)
	{
		if (e->side_dist_x < e->side_dist_y)
		{
			e->side_dist_x += e->delta_dist_x;
			e->map_x += e->step_x;
			e->side = 0;
		}
		else
		{
			e->side_dist_y += e->delta_dist_y;
			e->map_y += e->step_y;
			e->side = 1;
		}
		if (e->map[e->map_x][e->map_y] > 0)
			hit = 1;
	}
}

static void		init_dfa(t_env *e)
{
		if (e->ray_dir_x < 0)
		{
			e->step_x = -1;
			e->side_dist_x = (e->ray_pos_x - e->map_x) * e->delta_dist_x;
		}
		else
		{
			e->step_x = 1;
			e->side_dist_x = (e->map_x + 1 - e->ray_pos_x) * e->delta_dist_x;
		}
		if (e->ray_dir_y < 0)
		{
			e->step_y = -1;
			e->side_dist_y = (e->ray_pos_y - e->map_y) * e->delta_dist_y;
		}
		else
		{
			e->step_y = 1;
			e->side_dist_y = (e->map_y + 1 - e->ray_pos_y) * e->delta_dist_y;
		}
}

