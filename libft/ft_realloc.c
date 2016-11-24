/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 09:06:46 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/19 04:15:55 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <stdlib.h>

void	*ft_realloc(void *old_p, size_t old_size, size_t new_size)
{
	void	*new_p;

	new_p = malloc(new_size);
	if (new_p == NULL)
		return (NULL);
	ft_memcpy(new_p, old_p, old_size);
	free(old_p);
	return (new_p);
}

