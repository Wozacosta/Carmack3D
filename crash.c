/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:58:42 by srabah-m          #+#    #+#             */
/*   Updated: 2016/11/21 21:32:25 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <wolf.h>

void	ft_fatal(char *error_msg)
{
	ft_putendl_fd(error_msg, 2);
	exit(1);
}