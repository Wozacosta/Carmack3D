/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:19:05 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:38 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The ft_memcpy() function copies n bytes from src to memory area dest
** If src and dest overlap behavior is undefined.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_pnt;
	const char	*src_pnt;

	if ((dest == NULL) || (src == NULL))
		return (NULL);
	dest_pnt = dest;
	src_pnt = src;
	while (n > 0)
	{
		*dest_pnt = *src_pnt;
		++dest_pnt;
		++src_pnt;
		--n;
	}
	return (dest);
}

