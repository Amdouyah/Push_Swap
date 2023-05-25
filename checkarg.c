/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:15:53 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/20 03:18:36 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	exit_err(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	checkdup(int *num, int l)
{
	int	i;
	int	j;

	i = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			if (num[i] == num[j])
			{
				free(num);
				exit_err();
			}
			j++;
		}
		i++;
	}
}

void	check_lkhawi(char *str)
{
	if (str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		exit_err();
}

void	free_stack(t_stack *a, t_stack *b)
{
	free(a->stack_arr);
	free(a);
	free(b->stack_arr);
	free(b);
}
