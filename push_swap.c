/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:15:52 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 10:49:03 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_sorting(t_stack *a, t_stack *b, int l)
{
	if (l == 2)
		sort_2(a);
	else if (l == 3)
		sort_three(a);
	else if (l == 4)
		sort_four(a, b);
	else if (l == 5)
		sort_five(a, b);
	else
		range(a, b, l);
}

int	main(int ac, char **av)
{
	int		l;
	int		*n;
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		i = 0;
		l = counter(av);
		n = store_variables(av, l);
		checkdup(n, l);
		stack_a = fill_stack(stack_a, l, n);
		stack_b = allocate_stacks(stack_b, l);
		stack_a->top = l - 1;
		stack_b->top = -1;
		push_swap_sorting(stack_a, stack_b, l);
		free_stack(stack_a, stack_b);
		free(n);
		while(1);
	}
}

void	free_stack(t_stack *a, t_stack *b)
{
	free(a->stack_arr);
	free(a);
	free(b->stack_arr);
	free(b);
}
