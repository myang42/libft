/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_fill_chain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 15:31:48 by myang             #+#    #+#             */
/*   Updated: 2017/09/28 16:24:00 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	add_elem(t_double **first, char **new_content)
{
	t_double	*new_elem;

	if (!(new_elem = (t_double*)malloc(sizeof(t_double))))
		return ;
	new_elem->content = new_content;
	new_elem->next = *first;
	*first = new_elem;
}

void	list_fill_chain(t_double **first, char ***file)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(**file);
	while (--len >= 0)
		add_elem(first, file[len]);
}
