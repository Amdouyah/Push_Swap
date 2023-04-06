/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Implementation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:20:48 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/06 02:16:37 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack,int num)
{
	stack->top++;
	stack->stack_arr[stack->top] = num;
}

void	pop(t_stack *stack)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * stack->top);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < stack->top)
	{
		arr[i] = stack->stack_arr[i];
		i++;
	}
	free(stack->stack_arr);
	stack->stack_arr = arr;
	stack->top--;
}
