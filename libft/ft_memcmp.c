/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:10:54 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:22:51 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				x;
	unsigned char		*ss1;
	unsigned char		*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	x = 0;
	while (x < n)
	{
		if (ss1[x] != ss2[x])
			return (ss1[x] - ss2[x]);
		x++;
	}
	return (0);
}
