/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:13:40 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 10:14:48 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sa(t_stack *s, int a)
{
	if (s->top >= 0)
		ft_swap(&s->stack_arr[s->top], &s->stack_arr[s->top - 1]);
	if (a == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *s, int a)
{
	if (s->top >= 0)
		ft_swap(&s->stack_arr[s->top], &s->stack_arr[s->top - 1]);
	if (a == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write (1, "ss\n", 3);
}
