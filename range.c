/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 02:26:34 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/20 03:15:01 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_index(t_stack *a, int *n, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = 0;
		while (j < l)
		{
			if (a->stack_arr[i] == n[j])
			{
				a->stack_arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	range(t_stack *stack_a, t_stack *stack_b, int l)
{
	int	*n;

	n = NULL;
	n = fill_int(stack_a, l, n);
	sort_a(n, l);
	fill_index(stack_a, n, l);
	free(n);
	sort_range(stack_a, stack_b, l);
}

void	push_to_b(t_stack *a, t_stack *b, int start, int end)
{	
	while (a->top + 1)
	{
		if (a->stack_arr[a->top] <= start)
		{
			pb(a, b);
			rb(b, 1);
			start++;
			end++;
		}
		else if (a->stack_arr[a->top] > start && a->stack_arr[a->top] < end)
		{
			pb(a, b);
			start++;
			end++;
		}
		else if (a->stack_arr[a->top] >= end)
		{
			ra(a, 1);
		}
	}
}

void	push_to_a(t_stack *a, t_stack *b)
{
	int	midl;
	int	max;
	int	indx;

	while (b->top + 1)
	{
		midl = b->top / 2;
		max = get_max(b);
		indx = find_max_index(max, b);
		if (indx < midl)
		{
			while (b->stack_arr[b->top] != max)
				rrb(b, 1);
		}
		else
		{
			while (b->stack_arr[b->top] != max)
				rb(b, 1);
		}
		pa(a, b);
	}
}

void	sort_range(t_stack *a, t_stack *b, int l)
{
	if (l > 5 && l <= 100)
	{
		push_to_b(a, b, 0, 15);
		push_to_a(a, b);
	}
	else if (l > 100)
	{
		push_to_b(a, b, 0, 30);
		push_to_a(a, b);
	}
}
