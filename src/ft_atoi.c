/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:37:24 by myang             #+#    #+#             */
/*   Updated: 2017/06/20 12:54:59 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		dest;
	int		e;

	e = 0;
	dest = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\t' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		e = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		dest = dest * 10 + (str[i] - '0');
		i++;
	}
	if (e == 1)
		return (-dest);
	return (dest);
}
