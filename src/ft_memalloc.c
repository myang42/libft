/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:19:43 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 12:06:52 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	*zone;

	zone = 0;
	zone = (size_t *)malloc(sizeof(*zone) * size);
	if (zone == NULL)
		return (NULL);
	ft_bzero(zone, size);
	return (zone);
}
