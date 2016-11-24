/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:19:17 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:23:32 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <string.h>

/*
** errno is not set to ENOMEN, we can't include <errno.h>
*/
char*	ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	dest = ((char *)(malloc(len + 1)));
	if (dest == NULL)
		return (NULL);
	else
		return ((char*)ft_memcpy(dest, s, len + 1));
}

