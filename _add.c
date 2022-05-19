#include "monty.h"
/**
 * _add - The opcode add adds the top
 * two elements of the stack.
 * @new: Pointer to the new node
 * @i: Line number
 */
void _add(stack_t  **stack, unsigned int i)
{
	int add;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't add, stack too short\n", i);
		_free();
		exit(EXIT_FAILURE);
	}
/*Next node*/
    (*stack) = (*stack)->next;
/*add current n and the n from the previus*/
    add = (*stack)->n + (*stack)->prev->n;
/*replace the value (n) for the current node with add*/
    (*stack)->n = add;
/*free the previus*/
    free((*stack)->prev);
    (*stack)->prev = NULL;
}