/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:09:11 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:24:23 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*new_string;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	len = ft_strlen(s);
	new_string = (char *)malloc(len + 1);
	i = 0;
	while (s[i] != '\0')
	{
		new_string[i] = f(s[i]);
		++i;
	}
	new_string[i] = '\0';
	return (new_string);
}

