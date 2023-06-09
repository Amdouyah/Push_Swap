/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 02:46:09 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 10:12:08 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *s_a, int a)
{
	int	i;

	i = 0;
	while (i < s_a->top)
	{
		ft_swap(&s_a->stack_arr[i], &s_a->stack_arr[i + 1]);
		i++;
	}
	if (a == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *s_b, int a)
{
	int	i;

	i = 0;
	while (i < s_b->top)
	{
		ft_swap(&s_b->stack_arr[i], &s_b->stack_arr[i + 1]);
		i++;
	}
	if (a == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *s_a, t_stack *s_b)
{
	rra(s_a, 0);
	rrb(s_b, 0);
	write(1, "rrr\n", 4);
}
