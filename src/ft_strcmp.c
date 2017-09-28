/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:35:40 by myang             #+#    #+#             */
/*   Updated: 2016/11/16 17:43:00 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s;
	unsigned char	*ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	i = 0;
	if (s == NULL && ss == NULL)
		return (0);
	while (s[i] == ss[i] && s[i] && ss[i])
	{
		if (ss[i] != s[i])
			return (s[i] - ss[i]);
		i++;
	}
	return (s[i] - ss[i]);
}
