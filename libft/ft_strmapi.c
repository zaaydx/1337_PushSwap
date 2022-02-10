/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:02:31 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 19:13:28 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	size_t	y;
	char	*ptr;

	if (s == NULL || f == NULL)
		return (0);
	x = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (x + 1));
	if (!ptr)
		return (0);
	y = 0;
	while (y < x)
	{
		ptr[y] = f(y, s[y]);
		y++;
	}
	ptr[y] = '\0';
	return (ptr);
}
