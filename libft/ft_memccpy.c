/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:19:42 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:25 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** ft_memccpy() copies bytes from src to dest.
** is c occurs in src, the copy stops and we return dest
** return a pointer on the found character
** return NULL if c wasn't found
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest_pnt;
	const char	*src_pnt;

	if ((dest == NULL) || (src == NULL))
		return (NULL);
	dest_pnt = dest;
	src_pnt = src;
	while (n > 0)
	{
		--n;
		if ((*dest_pnt++ = *src_pnt++) == (char)c)
			return (dest_pnt);
	}
	return (NULL);
}

