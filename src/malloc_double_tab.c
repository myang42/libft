/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_double_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 15:22:33 by myang             #+#    #+#             */
/*   Updated: 2017/02/04 15:26:48 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**malloc_double_tab(size_t size)
{
	size_t	zone;
	char	**dest;

	zone = 0;
	dest = (char **)malloc(sizeof(char *) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (zone <= size)
	{
		dest[zone] = (char*)malloc(sizeof(char) * (size + 1));
		ft_bzero(dest[zone], size + 1);
		zone++;
	}
	return (dest);
}
