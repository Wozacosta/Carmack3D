/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:18:10 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:23:09 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <stdlib.h>

void	ft_strclr(char *s)
{
	size_t	size;

	if (s == NULL)
		return ;
	else
	{
		size = ft_strlen(s);
		ft_memset(s, '\0', size);
	}
}

