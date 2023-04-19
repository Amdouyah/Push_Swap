/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:54:07 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 09:53:07 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *s_a, t_stack *s_b)
{
	if (s_b->top < 0)
		return ;
	s_a->stack_arr[s_a->top + 1] = s_b->stack_arr[s_b->top + 1];
	s_a->top++;
	s_b->top--;
	write(1, "pa\n", 3);
}

void	pb(t_stack *s_a, t_stack *s_b)
{
	if (s_a->top < 0)
		return ;
	s_b->top++;
	s_b->stack_arr[s_b->top] = s_a->stack_arr[s_a->top];
	s_a->top--;
	write(1, "pb\n", 3);
}
