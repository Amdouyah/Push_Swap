#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sa(t_stack *stack, int a)
{
	if (stack->top >= 0)
			ft_swap(&stack->stack_arr[stack->top], &stack->stack_arr[stack->top - 1]);
	if (a == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack, int a)
{
	if (stack->top >= 0)
		ft_swap(&stack->stack_arr[stack->top], &stack->stack_arr[stack->top - 1]);
	if (a == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write (1, "ss\n", 3);
}
