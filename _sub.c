#include "monty.h"
/**
 * _sub - The opcode add adds the top
 * two elements of the stack.
 * @stack: Pointer to the new node
 * @i: Line number
 */
void _sub(stack_t  **stack, unsigned int i)
{
	int sub;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", i);
		_free();
		exit(EXIT_FAILURE);
	}
/*Next node*/
	(*stack) = (*stack)->next;
/*sub current n and the n from the previus*/
	sub = (*stack)->n - (*stack)->prev->n;
/*replace the value (n) for the current node with add*/
	(*stack)->n = sub;
/*free the previus*/
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
