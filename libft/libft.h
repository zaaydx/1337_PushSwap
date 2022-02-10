/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:45:43 by zchbani           #+#    #+#             */
/*   Updated: 2022/01/11 23:49:27 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *b, int c, size_t len);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t n);
long long	ft_atoi(const char *str);
char		*ft_strdup(const char *s1);
void		*ft_memmove(void *s1, const void *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strnstr(const char *x, const char *z, size_t len);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/* Stack */
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

/* list.c File */
t_list		*ft_lstnew(int value);
t_list		*ft_lstlast(t_list *head);
void		ft_lstadd_front(t_list **stack, t_list *new);
void		ft_lstadd_back(t_list **stack, t_list *new);
void		printlist(t_list *head);
int			ft_lstsize(t_list *head);

#endif
