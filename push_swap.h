/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:33:47 by zchbani           #+#    #+#             */
/*   Updated: 2022/01/11 17:09:35 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"
# define STDIN 0
# define STDOUT 1
# define STDERR 2

/* radix_sort.c File */
void	radix_sort(t_list **stack_a, t_list **stack_b);

/* sorting_element.c File */
int		get_min(t_list **stack, int val);
void	sort_3_element(t_list **stack_a);

/* simple_sort.c File */
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	sort_4_element(t_list **stack_a, t_list **stack_b);
void	sort_5_element(t_list **stack_a, t_list **stack_b);

/* instruction1.c File */
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);

/* instruction2.c File */
int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);

/* instruction3.c File */
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);

/* instruction4.c File */
int		reverserotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

/* utiles1.c File */
void	ft_error(void);
void	ft_check_args(int argc, char **argv);

/* utiles2.c File */
void	index_stack(t_list **stack);
void	initstack(t_list **stack, int argc, char **argv);

/* utiles3.c File */
void	ft_free(char **str);
int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
void	make_top(t_list **stack, int distance);
void	free_stack(t_list **stack);

#endif
