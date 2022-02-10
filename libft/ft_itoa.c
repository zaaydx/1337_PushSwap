/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:14:25 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 19:12:44 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		l;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	l = nbr(n);
	len = nbr(n) + 1;
	tab = (char *)malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	if (n < 0)
	{
		tab[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		tab[len - 2] = n % 10 + '0';
		len--;
		n /= 10;
	}
	tab[len - 2] = n + '0';
	tab[l] = '\0';
	return (tab);
}
