/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:26:08 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 13:43:47 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *needle)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (needle[0] == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		while (src[i] == needle[c])
		{
			if (needle[c + 1] == '\0')
				return ((char *)&src[i - c]);
			c++;
			i++;
		}
		if (src[i] != needle[c])
		{
			i = ((i - c) + 1);
			c = 0;
		}
	}
	return (NULL);
}
