/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:18:59 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:29 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src_pnt;

	if (s == NULL)
		return (NULL);
	src_pnt = ((unsigned char*)s);
	while (n > 0)
	{
		if (*src_pnt != (unsigned char)c)
			++src_pnt;
		else
			return (src_pnt);
		--n;
	}
	return (NULL);
}

