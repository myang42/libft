/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:23:04 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 10:28:29 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*srccpy;
	char		*destcpy;
	size_t		i;
	size_t		l;

	i = 0;
	l = 0;
	srccpy = (const char *)src;
	destcpy = (char *)dest;
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		if (srccpy[i] == c)
			return (&destcpy[i + 1]);
		i++;
	}
	return (NULL);
}
