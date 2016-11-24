/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 05:38:52 by srabah-m          #+#    #+#             */
/*   Updated: 2014/01/15 20:28:55 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include <stdlib.h>
#include <string.h>

static int	ft_trimable(char c);
static int	ft_index_left(char const *s);
static int	ft_index_right(char const *s);

static int	ft_trimable(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t'))
		return (1);
	else
		return (0);
}

static int	ft_index_left(char const *s)
{
	size_t	i;

	i = 0;
	while ((s[i] != '\0') && (ft_trimable(s[i])))
		++i;
	return (i);
}

static int	ft_index_right(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while ((i >= 0) && (ft_trimable(s[i])))
		--i;
	return (i);
}

char		*ft_strtrim(char const *s)
{
	size_t	l;
	size_t	r;
	size_t	i;
	char	*new_line;

	if (s == NULL)
		return (NULL);
	l = ft_index_left(s);
	r = ft_index_right(s);
	if ((((int) r) - ((int) l)) < 0)
	{
		new_line = (char *)malloc(1);
		new_line[0] = '\0';
		return (new_line);
	}
	new_line = (char *)malloc((size_t) (r - l + 2));
	if (new_line == NULL)
		return (NULL);
	i = 0;
	while (l <= r)
		new_line[i++] = s[l++];
	new_line[i] = '\0';
	return (new_line);
}

