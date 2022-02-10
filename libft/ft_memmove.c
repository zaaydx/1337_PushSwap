/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:41:38 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:23:16 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t				x;
	unsigned char		*dest;
	unsigned char		*src;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	x = 0;
	if (src > dest)
	{
		while (x < n)
		{
			dest[x] = src[x];
			x++;
		}
	}
	else
	{
		while (n--)
			dest[n] = src[n];
	}
	return (dest);
}
