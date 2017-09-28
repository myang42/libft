/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:55:23 by myang             #+#    #+#             */
/*   Updated: 2017/09/28 16:21:52 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(size_t start, char const *s)
{
	start = 0;
	while ((s[start] == ' ' || s[start] == '\n' ||
				s[start] == '\t') && s[start])
		start++;
	return (start);
}

static size_t	ft_end(size_t end, char const *s)
{
	end = ft_strlen(s);
	while ((s[end - 1] == ' ' || s[end - 1] == '\n' ||
				s[end - 1] == '\t') && s[end - 1])
		end--;
	return (end);
}

char			*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	char		*dest;

	end = 0;
	start = 0;
	if (!s)
		return (NULL);
	end = ft_end(end, s);
	start = ft_start(start, s);
	dest = NULL;
	if ((start == 0 && end == 0) || s[start] == '\0')
	{
		dest = ft_strdup("\0");
		return (dest);
	}
	else
		return (ft_strsub(s, start, (end - start)));
	return (0);
}
