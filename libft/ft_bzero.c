/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:18:18 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:18:30 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*pnt;

	if (s == NULL)
		return ;
	pnt = s;
	while (n > 0)
	{
		*pnt = 0;
		++pnt;
		--n;
	}
}
