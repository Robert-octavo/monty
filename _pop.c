#include "monty.h"
/**
 * _pop - The opcode pop removes the
 * top element of the stack.
 * @stack: Is the first attribute
 * @i: Line number
 */
void _pop(stack_t  **stack, unsigned int i)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", i);
		_free();
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
