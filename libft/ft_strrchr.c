/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:15:56 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:25:30 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The return is "casting away the constness
*/
char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	c_read;

	if (!s)
		return (NULL);
	last = NULL;
	while (*s)
	{
		c_read = (unsigned char)(*s);
		if (c_read == (unsigned char)c)
			last = s;
		s++;
	}
	if ((c == 256) || (c == 0))
		return ((char *)s);
	return ((char *)last);
}

