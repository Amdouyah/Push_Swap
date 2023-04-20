/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:15:52 by amdouyah          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/20 03:20:24 by amdouyah         ###   ########.fr       */
=======
/*   Updated: 2023/04/19 10:49:03 by amdouyah         ###   ########.fr       */
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
int	sorted(t_stack *a, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			if (a->stack_arr[i] < a->stack_arr[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

void	push_swap_sorting(t_stack *a, t_stack *b, int l)
{
	if (sorted(a, l) == 0)
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
}

int	main(int ac, char **av)
{
=======
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
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
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
<<<<<<< HEAD
		free(n);
=======
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
		stack_a->top = l - 1;
		stack_b->top = -1;
		push_swap_sorting(stack_a, stack_b, l);
		free_stack(stack_a, stack_b);
<<<<<<< HEAD
	}
}
=======
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
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
