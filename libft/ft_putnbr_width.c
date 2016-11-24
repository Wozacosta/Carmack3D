/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 08:50:33 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/21 08:50:39 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_width(int n, int width)
{
	int	len;

	len = ft_strlen(ft_itoa(n));
	while (width > len)
	{
		ft_putchar(' ');
		width--;
	}
	ft_putstr(ft_itoa(n));
}

