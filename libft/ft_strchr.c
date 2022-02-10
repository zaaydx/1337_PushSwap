/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:33:37 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:24:30 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	k;

	k = c;
	i = 0;
	while (str[i] && str[i] != k)
		i++;
	if (str[i] == k)
	{
		return ((char *) &str[i]);
	}
	return (NULL);
}
