/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 14:21:01 by myang             #+#    #+#             */
/*   Updated: 2017/06/08 16:54:45 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	n = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (str);
	if (start >= ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	if (!s)
		return (str);
	while (n < len)
	{
		str[n] = s[start + n];
		n++;
	}
	str[len] = '\0';
	return (str);
}
