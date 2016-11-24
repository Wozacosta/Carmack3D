/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 01:21:17 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:19:26 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**temp;
	t_list	*temp_next;

	if ((alst == NULL) || (*alst == NULL) || (del == NULL))
		return ;
	temp = alst;
	while (*temp != NULL)
	{
		temp_next = (*temp)->next;
		ft_lstdelone(temp, del);
		*temp = temp_next;
	}
	ft_memdel((void *)alst);
}

