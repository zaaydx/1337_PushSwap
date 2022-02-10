/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:39:53 by zchbani           #+#    #+#             */
/*   Updated: 2022/01/11 23:49:07 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c > 8 && c < 14) || c == 32);
}

long long	ft_atoi(const char *str)
{
	int				i;
	long long		sig;
	long long		r;

	r = 0;
	i = 0;
	sig = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			r = (r * 10) + (str[i] - 48);
		else
			break ;
		i++;
	}
	return (r * sig);
}
