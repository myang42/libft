/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:06:27 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 12:49:19 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	map = (char*)malloc(sizeof(*map) * (ft_strlen(s) + 1));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (i < (unsigned int)ft_strlen(s))
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
