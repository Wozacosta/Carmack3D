/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:49:27 by srabah-m          #+#    #+#             */
/*   Updated: 2014/01/15 20:28:35 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include <stdlib.h>

static void		ft_fillsplit(char const *s, char **ar, char c, size_t n_tot);

size_t			ft_nbsplit(char const *s, char c)
{
	size_t	nb_split;
	size_t	i;

	i = 0;
	nb_split = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (s[i] != '\0'))
			++i;
		else if (s[i] != c)
		{
			nb_split++;
			while ((s[i] != c) && (s[i] != '\0'))
				++i;
		}
	}
	return (nb_split);
}

static void		ft_fillsplit(char const *s, char **ar, char c, size_t n_tot)
{
	size_t	n_split;
	size_t	j;

	n_split = 0;
	while (n_split < n_tot)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while ((s[j] != c) && (s[j] != '\0'))
			{
				++j;
			}
			ar[n_split] = (char *)malloc(sizeof(char) * j + 1);
			ft_memcpy(ar[n_split], s, j);
			ar[n_split][j] = '\0';
			s += j;
			n_split++;
		}
	}
	ar[n_tot] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nb_split;
	char	**r_array;

	if (s == NULL)
		return (NULL);
	nb_split = ft_nbsplit(s, c);
	if (nb_split == 0)
	{
		r_array = (char **)malloc(sizeof(char *));
		r_array[0] = NULL;
		return (r_array);
	}
	r_array = (char **)malloc(sizeof(char *) * (nb_split + 1));
	if (r_array == NULL)
		return (NULL);
	ft_fillsplit(s, r_array, c, nb_split);
	return (r_array);
}

