/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:10:12 by myang             #+#    #+#             */
/*   Updated: 2017/02/03 13:04:53 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int n)
{
	int	k;
	int	i;

	k = -1;
	i = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == (char)n)
			k = i;
		i++;
	}
	if (i == (int)ft_strlen(s) && s[i] == (char)n)
		return ((char*)&s[k]);
	return ((k != -1) ? ((char*)(&s[k])) : NULL);
}
