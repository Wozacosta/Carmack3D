/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 00:58:27 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:19:39 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

/*
** alst = adress of a pointer to a node in the list
** *alst = pointer on a node in the list
** **alst = node in the list
*/
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if ((alst == NULL) || (*alst == NULL) || (del == NULL))
		return ;
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void *)alst);
}

