/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:34:51 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:24:38 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	if ((dest == NULL) || (src == NULL))
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while ((src[j] != '\0') && (j < n))
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}

