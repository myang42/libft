/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:06:27 by myang             #+#    #+#             */
/*   Updated: 2017/02/03 13:04:34 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	char		*map;
	int			i;

	if (!s || !f)
		return (NULL);
	map = (char*)malloc(sizeof(*map) * (1 + ft_strlen(s)));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
