/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:24:01 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:25:25 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

/*
** ft_strnstr finds the first occurence of
** the needle in the haystack,
** where the search is limited to the first (n) characters
** of the haystack
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	size;

	if (haystack == NULL)
		return (NULL);
	if (needle == NULL)
		return ((char *)haystack);
	size = ft_strlen(needle);
	if (size == 0)
		return ((char *)haystack);
	while ((*haystack != '\0') && (n > 0))
	{
		if (size > n)
			return (NULL);
		if (ft_memcmp(haystack, needle, size) == 0)
			return ((char *)haystack);
		++haystack;
		--n;
	}
	return (NULL);
}

