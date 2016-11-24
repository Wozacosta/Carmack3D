/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 06:14:22 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:19:05 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_sizenum(long int n);
static void		ft_reverse(char arr[], long int len);
static char		*ft_itoa_zero(void);
static void		ft_itoa_sign(int *neg, long int *n);

static size_t	ft_sizenum(long int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static void		ft_reverse(char arr[], long int len)
{
	int		start;
	char	temp;

	start = 0;
	while (start < len)
	{
		temp = arr[start];
		arr[start] = arr[len];
		arr[len] = temp;
		start++;
		len--;
	}
}

static char		*ft_itoa_zero(void)
{
	char	*zero;

	zero = (char *)malloc(2);
	zero[0] = '0';
	zero[1] = '\0';
	return (zero);
}

static void		ft_itoa_sign(int *neg, long int *n)
{
	*neg = 0;
	if (*n < 0)
	{
		*n = -(*n);
		*neg = 1;
	}
}

char			*ft_itoa(int nb)
{
	int			negative;
	size_t		i;
	char		*full_num;
	long int	n;

	n = nb;
	if (n == 0)
		return (ft_itoa_zero());
	full_num = (char *)malloc(ft_sizenum(n) + 1);
	ft_itoa_sign(&negative, &n);
	i = 0;
	while (n != 0)
	{
		full_num[i++] = (char)((n % 10) + '0');
		n /= 10;
	}
	if (negative)
		full_num[i] = '-';
	else
		--i;
	ft_reverse(full_num, i);
	full_num[i + 1] = '\0';
	return (full_num);
}

