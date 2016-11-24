/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:12:55 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:25:15 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <stdlib.h>


/*
** the allocated memory (with malloc())
** is zeroed out with (ft_memset())
** see also : calloc
*/
char	*ft_strnew(size_t size)
{
	char	*new_string;

	if (size == 0)
		return (NULL);
	new_string = (char *)malloc(size);
	if (new_string == NULL)
		return (NULL);
	else
	{
		ft_memset(new_string, '\0', size);
		return (new_string);
	}
}

