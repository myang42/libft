/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:13:15 by myang             #+#    #+#             */
/*   Updated: 2016/11/20 11:22:00 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*src;

	src = (char *)malloc(sizeof(*src) * (size + 1));
	if (src != NULL)
	{
		ft_bzero(src, size + 1);
		return (src);
	}
	return (NULL);
}
