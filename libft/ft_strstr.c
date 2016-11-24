/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:20:10 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:25:49 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	size;

	if (haystack == NULL)
		return (NULL);
	if (needle == NULL)
		return ((char *)haystack);
	size = ft_strlen(needle);
	if (size == 0)
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		if (ft_memcmp(haystack, needle, size) == 0)
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}

