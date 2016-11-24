/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:31:28 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:24:54 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if ((*s1 != *s2) || (*s1 == '\0'))
			return ((int)(*s1 - *s2));
		++s1;
		++s2;
		--n;
	}
	return (0);
}

