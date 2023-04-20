/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:28:27 by amdouyah          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/20 03:13:34 by amdouyah         ###   ########.fr       */
=======
/*   Updated: 2023/04/19 10:28:40 by amdouyah         ###   ########.fr       */
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*store_variables(char **av, int l)
{
	int		i;
	int		j;
	int		a;
	char	**str;
	int		*num;

	num = malloc(sizeof (int) * l);
	a = 0;
	i = 0;
	while (av[++i])
	{
		check_lkhawi(av[i]);
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			if (ft_atoi(str[j]) < INT_MIN || ft_atoi(str[j]) > INT_MAX)
				exit_err();
			num[a++] = ft_atoi(str[j++]);
		}
<<<<<<< HEAD
		free_2d(str);
	}
	return (num);
}

void	free_2d(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	move_num_to_top_a(t_stack *stack_a, int k)
{
	while (stack_a->stack_arr[stack_a->top] != k)
		ra(stack_a, 1);
}
=======
	}
	return (num);
}
>>>>>>> 4aaae19bef3493e8a0d659121fcc99bcea71d576
