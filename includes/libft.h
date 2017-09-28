/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:02:21 by myang             #+#    #+#             */
/*   Updated: 2017/09/28 17:16:36 by myang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE_GNL 10
# define DB(x) ft_putendl(x)
# define ABS(x) ((x >= 0) ? x : -x)

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

typedef struct		s_double
{
	char			**content;
	struct s_double *next;
}					t_double;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);

void				ft_puttab(char **tab, size_t len);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(const char *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_bzero(void *str, size_t n);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				*ft_memset(void *str, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memalloc(size_t size);
void				tab_move_xy(char **tab, int *x, int *y);
void				list_fill_chain(t_double **first, char ***file);
void				ft_lstdelone(t_list **alst, void(*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void(*del)(void*, size_t));
void				basic_i2(int *i, int *j, size_t sizej, size_t sizei);

int					basic_i(int *i, int *j, size_t sizej, size_t sizei);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_atoi(char *str);
int					ft_isalnum(int n);
int					ft_isalpha(int a);
int					ft_isascii(int a);
int					ft_isdigit(int n);
int					ft_isdigitstr(char *str);
int					ft_islower(int a);
int					ft_isprint(int a);
int					ft_isupper(int a);
int					ft_tolower(int a);
int					ft_toupper(int a);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_findme(const char *s1, int n);
int					ft_findme_fromend(const char *s1, int n);
int					gnl(const int fd, char **line);
int					powerten(int val);
int					ft_findmestr(const char *s1, const char *s2);

char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *s);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strstr(const char *src, const char *needle);
char				*ft_strnstr(const char *src, const char *needle, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_itoa(int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strchr(const char *s, int n);
char				*ft_strrchr(const char *s, int n);
char				**ft_strsplit(char const *s, char c);
char				**malloc_double_tab(size_t size);
char				*ft_all_lower(char *str);
char				*ft_all_upper(char *str);
char				*one_string(char *str, char c);

size_t				ft_countword(char const *s, char c);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *s);
#endif
