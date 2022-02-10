/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:32:29 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:26:56 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	k;

	k = c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == k)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
