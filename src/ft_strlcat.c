/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:09:23 by myang             #+#    #+#             */
/*   Updated: 2016/11/23 12:42:20 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	i = 0;
	while (dest[i] && i < size)
		i++;
	s = i;
	while (src[i - s] && (i + 1) < size)
	{
		dest[i] = src[i - s];
		i++;
	}
	if (s < size)
		dest[i] = '\0';
	return (s + ft_strlen(src));
}
