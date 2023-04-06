/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 01:54:07 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/06 02:20:07 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *s_a, t_stack *s_b)
{
	if (s_b->top >= 0)
	{
		push(s_a, s_b->stack_arr[s_b->top]);
		pop(s_b);
	}
}

void	pb(t_stack *s_a, t_stack *s_b)
{
	if (s_a->top >= 0)
	{
		push(s_b, s_a->stack_arr[s_a->top]);
		pop(s_a);
	}
}
