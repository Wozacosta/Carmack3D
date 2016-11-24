/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:19:48 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:33 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_pnt;
	const unsigned char	*s2_pnt;

	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	s1_pnt = s1;
	s2_pnt = s2;
	while (n > 0)
	{
		if (*s1_pnt != *s2_pnt)
			return ((int)(*s1_pnt - *s2_pnt));
		++s1_pnt;
		++s2_pnt;
		--n;
	}
	return (0);
}

