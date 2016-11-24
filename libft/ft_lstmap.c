/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 01:48:16 by srabah-m          #+#    #+#             */
/*   Updated: 2014/01/15 20:27:13 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static void	ft_lstadd_bottom(t_list *alst, t_list *new);

static void	ft_lstadd_bottom(t_list *alst, t_list *new)
{
	if (new == NULL)
		return ;
	else
	{
		while (alst->next != NULL)
			alst = alst->next;
		alst->next = new;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*temp_list;

	if ((lst == NULL) || (f == NULL))
		return (NULL);
	new_list = ft_lstnew(lst->content, lst->content_size);
	new_list = f(lst);
	lst = lst->next;
	while (lst != NULL)
	{
		temp_list = f(lst);
		ft_lstadd_bottom(new_list, temp_list);
		lst = lst->next;
	}
	return (new_list);
}

