/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Implementation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:20:48 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 06:05:57 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int num)
{
	stack->stack_arr[stack->top] = num;
	stack->top++;
	// stack->top++;
	// printf("%d\n", stack->stack_arr[stack->top]);
	// exit(1);
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
