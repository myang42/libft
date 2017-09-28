/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 14:31:52 by myang             #+#    #+#             */
/*   Updated: 2017/06/08 17:35:16 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strnoc(char *str, char c)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			nbr++;
		i++;
	}
	return (nbr);
}

static int	strsize(char *str, char c)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		if (i > 0 && str[i] == c && str[i - 1] != c)
			nbr++;
		i++;
	}
	return (nbr);
}

char		*one_string(char *str, char c)
{
	int		i;
	int		size;
	char	*cpy;

	size = (ft_strlen(str) - 1) - strnoc(str, ' ');
	size += strsize(str, c);
	if (!(cpy = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			cpy[size] = str[i];
			size++;
			if (i < (int)ft_strlen(str) && str[i + 1] == c)
				cpy[size++] = ' ';
			i++;
		}
		else
			i++;
	}
	cpy[size] = '\0';
	return (cpy);
}
