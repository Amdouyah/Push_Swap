/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:15:52 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/03 05:38:02 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int counter(char **av)
{
	int i;
	int j;
	int l;
	char **str;

	i = 1;
	l = 0;
	while (av[i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		while(str[j])
		{
			j++;
			l++;	
		}
		i++;		
	}
	return (l);
}

int *store_variables(char **av, int l)
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
		str = ft_split(av[i] , ' ');
		checkdigit(str);
		j = 0;
		while(str[j])
		{
			if(ft_atoi(str[j]) < INT_MIN || ft_atoi(str[j]) > INT_MAX)
				exit_err();
			num[a++] = ft_atoi(str[j++]);
		}
	}
	return (num);
}


void	checkdigit(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9') && (str[i][j] != '-' && str[i][j] != '+'))
				exit_err();
			j++;
	
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int l;
	int *n;		
	int i;

	i = 0;
	l = counter(av);
	n = store_variables(av, l);
	checkdup(n, l);
}
