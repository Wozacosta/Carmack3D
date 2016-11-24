/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah-m <srabah-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 00:33:36 by srabah-m          #+#    #+#             */
/*   Updated: 2013/12/07 09:20:09 by srabah-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static void	ft_lstnew_nullcontent(t_list *new_list);

static void	ft_lstnew_nullcontent(t_list *new_list)
{
	new_list->content = NULL;
	new_list->content_size = 0;
}

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	if (content == NULL)
		ft_lstnew_nullcontent(new_list);
	else if (content_size > 0)
	{
		new_list->content = (void *)malloc(content_size);
		new_list->content_size = content_size;
		if (new_list->content == NULL)
		{
			free(new_list);
			return (NULL);
		}
		ft_memcpy(new_list->content, content, content_size);
	}
	else
	{
		new_list->content = (char *)content;
		new_list->content_size = 0;
	}
	new_list->next = NULL;
	return (new_list);
}

