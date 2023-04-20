/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:22:19 by amdouyah          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/20 03:14:53 by amdouyah         ###   ########.fr       */
=======
/*   Updated: 2023/04/19 10:36:06 by amdouyah         ###   ########.fr       */
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = stack->stack_arr[0];
	while (i < stack->top + 1)
	{
		if (stack->stack_arr[i] < min)
			min = stack->stack_arr[i];
		i++;
	}
	return (min);
}

int	get_max(t_stack *b)
{
	int	max;
	int	i;

	i = 1;
	max = b->stack_arr[0];
	while (i <= b->top)
	{
		if (max < b->stack_arr[i])
			max = b->stack_arr[i];
		i++;
	}
	return (max);
}

<<<<<<< HEAD
=======
void	move_num_to_top_a(t_stack *stack_a, int k)
{
	while (stack_a->stack_arr[stack_a->top] != k)
		ra(stack_a, 1);
}

>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
int	find_max_index(int max, t_stack *b)
{
	int	i;

	i = 0;
	while (i < b->top)
	{
		if (max == b->stack_arr[i])
			return (i);
		i++;
	}
	return (i);
}

int	counter(char **av)
{
	int		i;
	int		j;
	int		l;
	char	**str;

	i = 1;
	l = 0;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		while (str[j])
		{
			j++;
			l++;
		}
		i++;
<<<<<<< HEAD
		free_2d(str);
=======
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
	}
	return (l);
}

int	*fill_int(t_stack *stack, int l, int *n)
{
	int	i;

	n = malloc(l * sizeof(int));
	if (!n)
		return (0);
	i = 0;
	while (i < l)
	{
		n[i] = stack->stack_arr[i];
		i++;
	}
	return (n);
}
