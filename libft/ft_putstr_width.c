/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 08:50:50 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/21 08:51:01 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

void	ft_putstr_width(char const *s, int width)
{
	int	len;

	len = ft_strlen(s);
	while (width > len)
	{
		ft_putchar(' ');
		width--;
	}
	write(1, s, ft_strlen(s));
}

