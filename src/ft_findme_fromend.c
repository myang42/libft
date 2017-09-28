/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findme_fromend.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:19:38 by myang             #+#    #+#             */
/*   Updated: 2017/01/12 17:55:04 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_findme_fromend(const char *s1, int n)
{
	int		me;

	me = ft_strlen(s1) - 1;
	if (ft_strchr(s1, n) != NULL)
	{
		while (me >= 0 && s1[me] != (char)n)
			me--;
		return (me);
	}
	return (-1);
}
