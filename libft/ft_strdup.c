/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:39:50 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:24:42 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*src;
	int		len;
	int		x;

	len = 0;
	while (s1[len])
		len++;
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (0);
	x = 0;
	while (x < len)
	{
		src[x] = s1[x];
		x++;
	}
	src[x] = '\0';
	return (src);
}
