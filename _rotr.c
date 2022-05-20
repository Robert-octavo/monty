#include "monty.h"
/**
 * _rotr - The opcode rotr rotates the stack to the bottom.
 * The last element of the stack becomes the top element of the stack
 * @stack: Is the first attribute
 * @i: Line number
 */
void _rotr(stack_t **stack, unsigned int i)
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
	(tmp->prev)->next = NULL;
	tmp->prev = NULL;
	(*stack)->prev = tmp;
	(*stack) = tmp;
}
