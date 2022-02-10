/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:36:28 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:23:05 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*dest;
	unsigned char	*src;

	x = 0;
	if (!s1 && !s2)
		return (NULL);
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
