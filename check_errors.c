/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:28:27 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/19 10:28:40 by amdouyah         ###   ########.fr       */
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
	}
	return (num);
}