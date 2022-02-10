/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:11:41 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:25:28 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	size_t	len_d;

	if (!dst && size == 0)
		return (ft_strlen(src));
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	j = len_d;
	i = 0;
	if (size <= len_d)
		return (size + len_s);
	while (j < (size - 1) && src[i])
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (len_s + len_d);
}
