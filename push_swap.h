/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdouyah <amdouyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:01:22 by amdouyah          #+#    #+#             */
/*   Updated: 2023/04/13 02:52:40 by amdouyah         ###   ########.fr       */
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
void				sa(t_stack *stack, int a);
void				sb(t_stack *stack, int a);
void				ss(t_stack *stack_a, t_stack *stack_b);
void				pa(t_stack *s_a, t_stack *s_b, int a);
void				pb(t_stack *s_a, t_stack *s_b, int a);
void				ra(t_stack *s_a, int a);
void				rb(t_stack *s_b,  int a);
void				rr(t_stack *s_a, t_stack *s_b);
void				rra(t_stack *s_a, int a);
void				rrb(t_stack *s_b, int a);
void				rrr(t_stack *s_a, t_stack *s_b);
t_stack				*fill_stack(t_stack *stack_a, int l, int *n);
t_stack				*allocate_stacks(t_stack *stack, int l);
void				sort_three(t_stack *stack);
void				sort_five(t_stack *stack_a, t_stack *stack_b);
void				sort_2(t_stack *stack);
void				print_stack(t_stack* stack);
int 				get_min(t_stack* stack);
void				move_num_to_top_a(t_stack* stack_a, int k);

#endif