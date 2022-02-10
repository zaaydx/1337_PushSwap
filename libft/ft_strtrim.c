/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 08:39:56 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:27:05 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_tofind(char const *set, char c)
{
	int	i;

	i = 0;
	if (!set)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	len = ft_strlen(s1) - 1;
	while (s1[start] && ft_tofind(set, s1[start]) == 1)
		start++;
	while (len >= start && ft_tofind(set, s1[len]) == 1)
		len--;
	return (ft_substr(s1, start, len - start + 1));
}
