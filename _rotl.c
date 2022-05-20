#include "monty.h"
/**
 * _rotl - The opcode rotl rotates the stack to the top.
 * The top element of the stack becomes the last one, and
 * the second top element of the stack becomes the first one
 * @stack: Is the first attribute
 * @i: Line number
 */
void _rotl(stack_t **stack, unsigned int i)
{
	stack_t *tmp;

	(void)i;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
/*go to the last node*/
	tmp = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	(*stack)->prev = tmp;
	*stack = (*stack)->next;
	((*stack)->prev)->next = NULL;
	(*stack)->prev = NULL;
}
