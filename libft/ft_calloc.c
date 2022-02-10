/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:01:10 by zchbani           #+#    #+#             */
/*   Updated: 2021/11/20 18:20:58 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	pointer = malloc (count * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero (pointer, (count * size));
	return (pointer);
}
