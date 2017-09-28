/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:25:38 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 10:28:02 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destcpy;

	if (!(destcpy = malloc(n)))
		return (dest);
	destcpy = ft_memcpy(destcpy, src, n);
	dest = ft_memcpy(dest, destcpy, n);
	free(destcpy);
	return (dest);
}
