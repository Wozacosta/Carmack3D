/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:56:19 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:18:47 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

