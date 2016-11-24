/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_dyn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 09:07:23 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 10:53:31 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

/*
** n_d = memory left in d
**  void *ft_realloc(void *old_p, size_t old_size, size_t new_size);
*/
char	*ft_strncat_dyn(char **d, const char *s, size_t n, size_t *n_d)
{
	size_t	i;
	size_t	j;

	if ((d == NULL) || (*d == NULL) || (s == NULL))
		return (NULL);
	i = 0;
	j = 0;
	while ((*d)[i] != '\0')
		++i;
	if (i + n + 1 >= *n_d)
	{
		while (i + n + 1 >= *n_d)
			*n_d *= 2;
		*n_d *= 2;
		*d = (char *)ft_realloc(*d, i + 1, *n_d);
	}
	while ((s[j] != '\0') && (j < n))
	{
		(*d)[i + j] = s[j];
		++j;
	}
	(*d)[i + j] = '\0';
	return (*d);
}

