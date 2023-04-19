/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 02:26:34 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 09:41:43 by amdouyah         ###   ########.fr       */
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
			if(a->stack_arr[i] == n[j])
			{
				a->stack_arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

static int	get_max(t_stack *b)
{
	int	max;
	int	i;

	i = 1;
	max = b->stack_arr[0];
	while (i <= b->top)
	{
		if (max < b->stack_arr[i])
			max = b->stack_arr[i];
		i++;
	}
	return (max);
}


void	sort_a(int *n, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (n[i] > n[i + 1])
				ft_swap(&n[i], &n[i + 1]);
			i++;
		}
		size--;
	}
}

int	*fill_int(t_stack *stack, int l, int *n)
{
	int	i;

	n = malloc(l * sizeof(int));
	if (!n)
		return (0);
	i = 0;
	while (i < l)
	{
		n[i] = stack->stack_arr[i];
		i++;
	}
	return (n);
}

void	range(t_stack *stack_a, t_stack *stack_b, int l)
{
	int *n;

	n = NULL;
	n = fill_int(stack_a, l, n);
	sort_a(n, l);
	fill_index(stack_a, n, l);
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

static int	find_max_index(int max, t_stack *b)
{
	int	i;

	i = 0;
	while (i < b->top)
	{
		if (max == b->stack_arr[i])
			return (i);
		i++;
	}
	return (i);
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
