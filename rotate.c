/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:20:14 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/06 02:50:31 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ra(t_stack *s_a)
{
	int i;
	
	i = s_a->top;
	while (i > 0)
	{
		ft_swap(&s_a->stack_arr[i], &s_a->stack_arr[i - 1]);
		i--;
	}
}

void	rb(t_stack *s_b)
{
	int i;
	
	i = s_b->top;
	while (i > 0)
	{
		ft_swap(&s_b->stack_arr[i], &s_b->stack_arr[i - 1]);
		i--;
	}
}

void	rr(t_stack *s_a, t_stack *s_b)
{
	ra(s_a);
	rb(s_b);
}