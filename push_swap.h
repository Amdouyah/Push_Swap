/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:01:22 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/06 19:20:23 by amdouyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack {
	int top;
	int *stack_arr;
} t_stack ;

char				**ft_split(char const *s, char c);
long long int		ft_atoi(const char *str);
int					counter(char **av);
void				checkdup(int *num, int l);
void				checkdigit(char **str);
void				exit_err(void);
void				check_lkhawi(char *str);
void				push(t_stack *stack,int num);
void				pop(t_stack *stack);
void				ft_swap(int *a, int *b);
void				sa(t_stack *stack);
void				sb(t_stack *stack);
void				ss(t_stack *stack_a, t_stack *stack_b);
void				pa(t_stack *s_a, t_stack *s_b);
void				pb(t_stack *s_a, t_stack *s_b);
void				ra(t_stack *s_a);
void				rb(t_stack *s_b);
void				rr(t_stack *s_a, t_stack *s_b);
void				rra(t_stack *s_a);
void				rrb(t_stack *s_b);
void				rrr(t_stack *s_a, t_stack *s_b);

#endif