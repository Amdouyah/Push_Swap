/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:46:09 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/06 02:51:30 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *s_a)
{
	int i;
	
	i = 0;
	while (i < s_a->top)
	{
		ft_swap(&s_a->stack_arr[i], &s_a->stack_arr[i + 1]);
		i++;
	}
}

void	rrb(t_stack *s_b)
{
	int i;
	
	i = 0;
	while (i < s_b->top)
	{
		ft_swap(&s_b->stack_arr[i], &s_b->stack_arr[i + 1]);
		i++;
	}
}

void	rrr(t_stack *s_a, t_stack *s_b)
{
	rra(s_a);
	rrb(s_b);
}