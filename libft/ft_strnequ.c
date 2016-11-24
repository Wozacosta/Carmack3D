/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:16:12 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:25:02 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	if (n == 0)
		return (1);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		++s1;
		++s2;
		--n;
		if (n == 0)
			return (1);
	}
	return (0);
}

