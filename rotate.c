/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:20:14 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/13 02:00:29 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ra(t_stack *s_a, int a)
{
	int i;
	
	i = s_a->top;
	while (i > 0)
	{
		ft_swap(&s_a->stack_arr[i], &s_a->stack_arr[i - 1]);
		i--;
	}
	if (a == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *s_b, int a)
{
	int i;
	
	i = s_b->top;
	while (i > 0)
	{
		ft_swap(&s_b->stack_arr[i], &s_b->stack_arr[i - 1]);
		i--;
	}
	if (a == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack *s_a, t_stack *s_b)
{
	ra(s_a, 0);
	rb(s_b, 0);
	write(1, "rr\n", 3);
}