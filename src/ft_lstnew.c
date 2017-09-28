/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:27:46 by myang             #+#    #+#             */
/*   Updated: 2017/02/04 17:15:49 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	new_elem->next = NULL;
	if (content == NULL)
	{
		new_elem->content = NULL;
		new_elem->content_size = 0;
	}
	else
	{
		if (!(new_elem->content = malloc(sizeof(content_size))))
			return (NULL);
		else
		{
			ft_memcpy(new_elem->content, content, content_size);
			new_elem->content_size = content_size;
		}
	}
	return (new_elem);
}
