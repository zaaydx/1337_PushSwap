/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:03:11 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 19:11:32 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	counter(char const *s, char c)
{
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			counter++;
		while (s[i] != c && s[i])
			i++;
	}
	return (counter);
}

static char	*tab(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		lenght;
	char	**ptr;

	if (!s)
		return (NULL);
	lenght = counter(s, c);
	ptr = (char **)malloc(sizeof(char *) * (lenght + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	while (lenght > ++i)
	{
		while (s[0] == c)
			s++;
		ptr[i] = tab(s, c);
		if (!ptr[i])
		{
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
