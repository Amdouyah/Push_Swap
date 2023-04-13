/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Implementation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:20:48 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/13 04:36:19 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int num)
{
	stack->stack_arr[stack->top] = num;
	stack->top++;
}

void	pop(t_stack *stack)
{
	stack->top--;
	// arr = malloc(sizeof(int) * stack->top);
	// if (!arr)
	// 	return;
	// i = 0;
	// while (i < stack->top - 1)
	// {
	// 	arr[i] = stack->stack_arr[i];
	// 	printf("arr[i]: %i\n", arr[i]);
	// 	i++;
	// }
	// free(stack->stack_arr);
	// stack->stack_arr = arr;
}
