/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:34:45 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:26:28 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

static int	ft_isdigitope(int c);
static int	ft_isope(int c);
static int	ft_signope(int c);
static int	ft_isspace(int c);

int			ft_atoi(const char *str)
{
	int		res;
	size_t	index;
	int		sign;

	if ((*str == '\0') || (str == NULL))
		return (0);
	res = 0;
	sign = 1;
	index = 0;
	while (ft_isspace(str[index]))
		++index;
	if (!(ft_isdigitope(str[index])))
		return (0);
	if (ft_isope(str[index]))
		sign = ft_signope(str[index++]);
	if (!ft_isdigit(str[index]))
		return (0);
	while ((str[index] != '\0') && (ft_isdigit(str[index])))
	{
		res *= 10;
		res += str[index] - '0';
		++index;
	}
	return (sign*res);
}

static int	ft_isspace(int c)
{
	if ((c == '\n') || (c == '\v') || (c == '\t'))
		return (1);
	else if ((c == '\r') || (c == '\f') || (c == ' '))
		return (1);
	else
		return (0);
}

static int	ft_isdigitope(int c)
{
	if ((c == '+') || (c == '-'))
		return (1);
	else if (ft_isdigit(c))
		return (1);
	return (0);
}

static int	ft_isope(int c)
{
	if ((c == '+') || (c == '-'))
		return (1);
	return (0);
}

static int	ft_signope(int c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

