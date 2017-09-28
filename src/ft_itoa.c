/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:58:27 by myang             #+#    #+#             */
/*   Updated: 2016/11/23 11:23:51 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			*ft_rev_swap(char *s, size_t len)
{
	char			*dest;
	int				i;

	i = 0;
	dest = NULL;
	dest = ft_memalloc(len + 1);
	len = len - 1;
	if (dest == NULL)
		return (NULL);
	if (s[0] == '-')
	{
		i = 1;
		while (len != 1)
			dest[i++] = s[len--];
		dest[0] = s[0];
	}
	else
	{
		while (len != 0)
			dest[i++] = s[len--];
	}
	dest[i] = s[len];
	return (dest);
}

static char			*ft_chain(int n, char *chain, size_t len, size_t i)
{
	unsigned int	a;

	if (n < 0)
	{
		chain[i++] = '-';
		a = -n;
	}
	else
		a = n;
	if ((a / 10) != 0)
		chain[i] = *ft_chain((a / 10), chain, len, i + 1);
	chain[i++] = (a % 10) + '0';
	chain[len] = '\0';
	return (chain);
}

char				*ft_itoa(int n)
{
	char			*chain;
	unsigned int	nbr;
	size_t			len;
	float			c;

	chain = NULL;
	c = 1;
	len = 0;
	nbr = 0;
	if (n <= 0)
	{
		nbr = -n;
		len = len + 1;
	}
	else
		nbr = n;
	while (nbr >= c)
	{
		c = c * 10;
		len++;
	}
	if ((chain = (char *)malloc(sizeof(chain) * (len + 1))) == NULL)
		return (NULL);
	else
		return (ft_rev_swap(ft_chain(n, chain, len, 0), len));
}
