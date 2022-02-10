/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:21:41 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:25:43 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	x;
	size_t	s;

	x = 0;
	s = ft_strlen(src);
	if (!n)
		return (s);
	while (src[x] && x < n - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (s);
}
