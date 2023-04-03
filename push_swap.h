/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:01:22 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/03 04:18:54 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char				**ft_split(char const *s, char c);
long long int		ft_atoi(const char *str);
int					counter(char **av);
void				checkdup(int *num, int l);
void				checkdigit(char **str);
void				exit_err(void);
void				check_lkhawi(char *str);

#endif