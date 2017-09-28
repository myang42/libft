/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:27:57 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 14:24:03 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_check(char **dest, char const *s, char c)
{
	size_t			box;
	size_t			i;
	unsigned int	start;

	i = 0;
	box = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			dest[box++] = ft_strsub(s, start, (i - start));
		}
	}
	dest[box] = NULL;
	return (dest);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**dest;

	dest = NULL;
	if (!s || !c)
		return (NULL);
	if (!(dest = (char**)malloc(sizeof(*dest) * (ft_countword(s, c) + 1))))
		return (NULL);
	ft_check(dest, s, c);
	return (dest);
}
