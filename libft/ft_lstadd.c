/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 01:35:20 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:19:16 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	if ((new == NULL) || (alst == NULL) || (*alst == NULL))
		return ;
	else
	{
		new->next = (*alst);
		*alst = new;
	}
}

