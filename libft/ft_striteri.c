/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:07:12 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:23:47 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>


void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if ((s == NULL) || (f == NULL))
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		++i;
	}
}

