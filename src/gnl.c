/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 14:11:18 by myang             #+#    #+#             */
/*   Updated: 2017/04/03 14:29:41 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_cntnt(char **cntnt, char *book, char **tmp, const int fd)
{
	int	rd;

	*cntnt = ft_strdup(book);
	ft_bzero(book, BUFF_SIZE_GNL);
	while ((rd = read(fd, book, BUFF_SIZE_GNL)) > 0)
	{
		if (*tmp == NULL)
		{
			*tmp = ft_strjoin(*cntnt, book);
			ft_bzero(book, BUFF_SIZE_GNL);
			free(*cntnt);
			*cntnt = NULL;
		}
		*cntnt = ft_strjoin(*tmp, book);
		if (ft_findme(*tmp, '\n') != -1)
			break ;
		free(*tmp);
		*tmp = ft_strdup(*cntnt);
		free(*cntnt);
		*cntnt = NULL;
		ft_bzero(book, BUFF_SIZE_GNL);
	}
}

static int	rd_fd(const int fd, char **cntnt, char *txt)
{
	char	book[BUFF_SIZE_GNL + 1];
	char	*tmp;
	int		rd;

	tmp = NULL;
	ft_bzero(book, BUFF_SIZE_GNL + 1);
	rd = read(fd, book, BUFF_SIZE_GNL);
	if (rd > 0)
		fill_cntnt(cntnt, book, &tmp, fd);
	else if (rd < 0)
	{
		free(tmp);
		ft_strdel(cntnt);
		return (-1);
	}
	if (rd != 0 && tmp == NULL && *cntnt == NULL && txt == NULL)
	{
		free(tmp);
		return (-1);
	}
	else if (tmp != NULL && *cntnt == NULL)
		*cntnt = ft_strdup(tmp);
	ft_strdel(&tmp);
	return (rd);
}

static void	cut_line(char **txt, char **line)
{
	int		find;
	int		len;
	char	*tmp;

	len = ft_strlen(*line);
	find = ft_findme(*line, '\n');
	free(*txt);
	*txt = ft_strsub(*line, find + 1, len - find);
	if (find != -1)
		tmp = ft_strsub(*line, 0, len - (len - find));
	else
		tmp = ft_strsub(*line, 0, len);
	free(*line);
	*line = tmp;
}

static int	gnl_line(const int fd, char **cntnt, char **txt, char **line)
{
	int		rd;
	int		size;

	size = 0;
	if ((rd = rd_fd(fd, cntnt, *txt)) >= 0 && *txt != NULL && *cntnt != NULL)
	{
		size = ft_strlen(*cntnt) + ft_strlen(*txt);
		*line = (char*)malloc(sizeof(*line) * (size + 1));
		ft_strcpy(*line, *txt);
		ft_strcat(*line, *cntnt);
	}
	else if (rd >= 0 && *txt == NULL && *cntnt != NULL)
	{
		*line = (char*)malloc(sizeof(*line) * (ft_strlen(*cntnt) + 1));
		ft_bzero(*line, ft_strlen(*cntnt) + 1);
		ft_strcpy(*line, *cntnt);
	}
	else if (rd < 0)
	{
		ft_strdel(txt);
		free(*cntnt);
		*line = NULL;
	}
	return (rd);
}

int			gnl(const int fd, char **line)
{
	static char	*txt = NULL;
	int			rd;
	char		*cntnt;

	if (fd < 0 || !line)
		return (-1);
	rd = 0;
	cntnt = NULL;
	*line = NULL;
	if (txt != NULL && ft_findme(txt, '\n') != -1)
	{
		*line = ft_strdup(txt);
		cut_line(&txt, line);
	}
	else
		rd = gnl_line(fd, &cntnt, &txt, line);
	if (rd >= 0 && *line != NULL && ft_findme(*line, '\n') != -1)
		cut_line(&txt, &line[0]);
	free(cntnt);
	if (rd == 0 && *line == NULL)
	{
		*line = ((txt != NULL && txt[0] != '\0') ? ft_strdup(txt) : NULL);
		ft_strdel(&txt);
	}
	return ((rd >= 0 && *line != NULL) ? 1 : rd);
}
