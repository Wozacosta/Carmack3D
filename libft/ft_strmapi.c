/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:11:52 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:24:33 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*new_string;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	new_string = (char *)malloc(len + 1);
	i = 0;
	while (s[i] != '\0')
	{
		new_string[i] = f(i, s[i]);
		++i;
	}
	new_string[i] = '\0';
	return (new_string);
}

