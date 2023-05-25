/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 03:46:37 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/20 02:08:34 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*allocate_stacks(t_stack *stack, int l)
{
	stack = malloc(sizeof(t_stack));
	stack->stack_arr = malloc(sizeof(int) * l);
	if (!stack)
		return (NULL);
	return (stack);
}

t_stack	*fill_stack(t_stack *stack, int l, int *n)
{
	int	i;
	int	j;

	stack = allocate_stacks(stack, l);
	i = 0;
	j = l - 1;
	while (i < l)
	{
		stack->stack_arr[i] = n[j];
		i++;
		j--;
	}
	return (stack);
}
