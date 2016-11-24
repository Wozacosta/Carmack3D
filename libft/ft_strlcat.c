/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:06:16 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:24:07 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t siz)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dest;
	s = src;
	n = siz;
	while ((n-- != 0) && (*d != '\0'))
		d++;
	dlen = d - dest;
	n = siz - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

