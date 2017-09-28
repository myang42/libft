/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:26:08 by myang             #+#    #+#             */
/*   Updated: 2016/11/16 17:45:55 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *needle, size_t n)
{
	size_t			i;
	size_t			c;
	size_t			k;

	i = 0;
	c = 0;
	k = i;
	if (needle[c] == '\0' && i < n)
		return ((char *)src);
	while (src[i] && i < n)
	{
		k = i;
		while (src[i] == needle[c] && needle[c] != '\0')
		{
			i++;
			c++;
		}
		if (needle[c] == '\0' && i - 1 < n)
			return ((char*)&src[k]);
		else
			c = 0;
		i++;
	}
	return (NULL);
}
