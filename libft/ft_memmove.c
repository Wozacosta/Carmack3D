/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:19:55 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:58 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

/*
** ft_memmove copies n bytes from src to dest. The two strings may overlap
** we can simplify our conditions by not having to worry too much about overlap
** if SRC < DST  ----->  just copy from the end
** if SRC > DST  ----->  copy from the beginning
** if SRC == DST -----> just exit
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_pnt;
	char	*src_pnt;

	if ((dest == NULL) || (src == NULL))
		return (NULL);
	dest_pnt = (char *)dest;
	src_pnt = (char *)src;
	if (dest_pnt == src_pnt)
		return (dest);
	if (src_pnt < dest_pnt)
	{
		src_pnt = src_pnt + n - 1;
		dest_pnt = dest_pnt + n - 1;
		while (n > 0)
		{
			*dest_pnt = *src_pnt;
			--dest_pnt;
			--src_pnt;
			--n;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

