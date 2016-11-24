/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:19:11 by srabah-m          #+#    #+#             */
/*   Updated: 2014/01/15 20:27:45 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

/*
** The ft_memset() function writes
** len bytes of value c ( converted to an unsigned char)
** to the byte string b.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pnt;

	if (b == NULL)
		return (NULL);
	pnt = b;
	while (len > 0)
	{
		*pnt = (unsigned char)c;
		++pnt;
		--len;
	}
	return (b);
}

