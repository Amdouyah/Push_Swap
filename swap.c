#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	sa(t_stack *stack)
{
	if (stack->top >= 1)
		ft_swap(&stack->stack_arr[stack->top], &stack->stack_arr[stack->top - 1]);
}

void	sb(t_stack *stack)
{
	if (stack->top >= 1)
		ft_swap(&stack->stack_arr[stack->top], &stack->stack_arr[stack->top - 1]);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
