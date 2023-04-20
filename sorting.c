/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:16:39 by amdouyah          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/20 02:05:27 by amdouyah         ###   ########.fr       */
=======
/*   Updated: 2023/04/19 10:35:27 by amdouyah         ###   ########.fr       */
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *stack)
{
	if (stack->stack_arr[stack->top] > (stack->stack_arr[stack->top - 1]))
		sa(stack, 1);
}

void	sort_three(t_stack *stack)
{
	int	indx0;
	int	indx1;
	int	indx2;

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

void	sort_four(t_stack *a, t_stack *b)
{
	move_num_to_top_a(a, get_min(a));
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	move_num_to_top_a(stack_a, get_min(stack_a));
	pb(stack_a, stack_b);
	move_num_to_top_a(stack_a, get_min(stack_a));
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
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
