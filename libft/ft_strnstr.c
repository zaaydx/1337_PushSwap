/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:41:36 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:26:45 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	k;

	k = 0;
	if (str2[k] == '\0')
		return ((char *)str1);
	while (str2[k])
		k++;
	a = 0;
	while (str1[a] && a < len)
	{
		b = 0;
		while (str2[b] && a + b < len && str1[a + b] == str2[b])
			b++;
		if (b == k)
			return ((char *)str1 + a);
		a++;
	}
	return (NULL);
}
