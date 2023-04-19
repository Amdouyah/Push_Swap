/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:20:14 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 03:35:10 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ra(t_stack *a, int n)
{
	int	first;
	int	i;

	i = a->top;
	if (i <= 0)
		return ;
	first = a->stack_arr[i];
	while (i > 0)
	{
		a->stack_arr[i] = a->stack_arr[i - 1];
		i--;
	}
	a->stack_arr[0] = first;
	if (n == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b, int a)
{
	int	first;
	int	i;

	i = b->top;
	if (i <= 0)
		return ;
	first = b->stack_arr[i];
	while (i > 0)
	{
		b->stack_arr[i] = b->stack_arr[i - 1];
		i--;
	}
	b->stack_arr[0] = first;
	if (a == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack *s_a, t_stack *s_b)
{
	ra(s_a, 0);
	rb(s_b, 0);
	write(1, "rr\n", 3);
}