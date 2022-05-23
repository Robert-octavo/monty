#include "monty.h"
/**
 * _pstr - The opcode pstr prints the string starting at
 * the top of the stack, followed by a new line.
 * @stack: Is the first attribute
 * @i: Line number
 */
void _pstr(stack_t  **stack, unsigned int i)
{
    /*to save the ASCII Value of the (n) in the stack*/
	int value;
	stack_t *tmp;
	(void)i;

	if (stack == NULL || *stack == NULL)
	{
		printf("\n");
		return;
	}
	tmp = *stack;
	while (tmp)
	{
		value = tmp->n;
/*value out of the ASCII range - stop */
/*if value gets 0, it ends*/
		if (value < 1 || value > 127)
			break;
		printf("%c", value);
		tmp = tmp->next;
	}
	printf("\n");
}
