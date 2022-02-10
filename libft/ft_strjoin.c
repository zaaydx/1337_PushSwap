/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:08:26 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 19:13:12 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght1;
	int		lenght2;
	int		x;
	char	*str;

	x = 0;
	if (!s1 || !s2)
		return (NULL);
	lenght1 = ft_strlen(s1);
	lenght2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (!str)
		return (NULL);
	while (x < lenght1)
	{
		str[x] = s1[x];
		x++;
	}
	while (x - lenght1 < lenght2)
	{
		str[x] = s2[x - lenght1];
		x++;
	}
	str[x] = '\0';
	return (str);
}
