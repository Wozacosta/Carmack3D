/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:29:30 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:22:55 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, const char *src)
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
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}

