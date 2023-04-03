/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:26:03 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/03 05:33:55 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ft_atoi(const char *str)
{
	long long int	r;
	int				i;
	int				sign;

	r = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			r = (r * 10) + (str[i] - 48);
		else
			exit_err();
		i++;
	}
	return (r * sign);
}

static int	word_num(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
			{
				i++;
			}
			n++;
		}
	}
	return (n);
}

static int	word_len(char const *s, char c, int i)
{
	int	a;

	a = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		a++;
	}
	return (a);
}

static char	**alloc(char **p, const char *s, int i, char c)
{
	int	j;
	int	k;

	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			p[j] = malloc(sizeof(char) * (word_len(s, c, i) + 1));
			if (!p[j])
				return (NULL);
			while (s[i] && s[i] != c)
				p[j][k++] = s[i++];
			p[j++][k] = '\0';
		}
	}
	p[j] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;

	p = malloc(sizeof(char *) * (word_num(s, c) + 1));
	if (!p)
		return (NULL);
	i = 0;
	alloc(p, s, i, c);
	return (p);
}
