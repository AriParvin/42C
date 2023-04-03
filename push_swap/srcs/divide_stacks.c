#include "push_swap.h"

static int	stack_rotator(t_stack **stack, t_com **result, int rot)
{
	rab(stack);
	if ((*stack)->diff == 1)
		(*result)->final = add_to_string
