/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:15:53 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/03 05:38:32 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void exit_err(void)
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
				exit_err();
			j++;
		}
		i++;	
	}
}

void	check_lkhawi(char *str)
{
	int	i;

		if (str[0] == '\0')
			exit_err();
}
