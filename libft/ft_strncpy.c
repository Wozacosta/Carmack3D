/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:25:59 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:24:58 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** note that if src >= n,
** no NULL character will be written at the end of dest
**        dest won't be terminated
** if src < n, the rest of desct will befilled with NULL
*/
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) || (src == NULL))
		return (NULL);
	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

