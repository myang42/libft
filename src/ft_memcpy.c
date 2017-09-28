/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:23:04 by myang             #+#    #+#             */
/*   Updated: 2016/11/13 21:20:19 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*srccpy;
	char		*destcpy;
	size_t		i;

	i = 0;
	srccpy = (const char *)src;
	destcpy = (char *)dest;
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (destcpy);
}
