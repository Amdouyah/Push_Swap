/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:22:19 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 06:13:19 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(t_stack *stack)
{
	int indx0;
	int indx1;
	int indx2;

	indx0 = stack->stack_arr[2];
	indx1 = stack->stack_arr[1];
	indx2 = stack->stack_arr[0];

	if (indx0 > indx1 && indx0 < indx2 && indx1 < indx2)
		sa(stack, 1);
	else if (indx0 > indx1 && indx1 > indx2 && indx0 > indx2)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (indx0 > indx2 && indx2 > indx1 && indx0 > indx1)
		ra(stack, 1);
	else if (indx0 < indx1 && indx1 > indx2 && indx2 > indx0)
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (indx0 < indx1 && indx0 > indx2 && indx1 > indx2)
		rra(stack, 1);
}

int get_min(t_stack* stack)
{
	int i;
	int min;

	i = 0;
	min = stack->stack_arr[0];
	while (i < stack->top + 1)
	{
		if (stack->stack_arr[i] < min)
			min = stack->stack_arr[i];
		i++;
	}
	return (min);
}

void move_num_to_top_a(t_stack* stack_a, int k)
{
	while (stack_a->stack_arr[stack_a->top] != k)
		ra(stack_a, 1);
}

void print_stack(t_stack *stack)
{
	int i = stack->top;
	// int j = 0;
	while (i>=0)
	{
		printf("stack is :[ %i ]\n", stack->stack_arr[i]);
		// j++;
		i--;
	}
}

void sort_five(t_stack *stack_a, t_stack *stack_b)
{
	move_num_to_top_a(stack_a, get_min(stack_a));
	pb(stack_a, stack_b);
	move_num_to_top_a(stack_a, get_min(stack_a));
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_2(t_stack *stack)
{
	if (stack->stack_arr[stack->top] > (stack->stack_arr[stack->top - 1]))
		sa(stack, 1);
}
