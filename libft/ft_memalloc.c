/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:09:44 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:21 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*memory;

	memory = malloc(size);
	ft_memset(memory, 0, size);
	return (memory);
}

