/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:28:51 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:22:26 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			x;
	unsigned char	charact;
	unsigned char	*s1;

	charact = (unsigned char)c;
	s1 = (unsigned char *)str;
	x = 0;
	while (x < n)
	{
		if (*s1 == charact)
		{
			return (s1);
		}
		s1++;
		x++;
	}
	return (NULL);
}
