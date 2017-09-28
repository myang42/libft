/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 14:19:57 by myang             #+#    #+#             */
/*   Updated: 2017/02/03 14:21:12 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		x;
	char	*copie;

	x = 0;
	i = (int)ft_strlen(s);
	if ((copie = malloc(sizeof(char) * (i + 1))) == NULL)
		return (0);
	while (x != i)
	{
		copie[x] = s[x];
		x++;
	}
	copie[x] = '\0';
	return (copie);
}
