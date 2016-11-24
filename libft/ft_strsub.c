/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:21:23 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:25:54 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_line;
	size_t	i;

	if (s == NULL)
		return (NULL);
	new_line = (char *)malloc(len + 1);
	if (new_line == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_line[i] = s[start + i];
		++i;
	}
	new_line[i] = '\0';
	return (new_line);
}

