#include "monty.h"
/**
 * _pchar - The opcode pchar prints the char at the
 * top of the stack, followed by a new line.
 * @stack: Is the first attribute
 * @i: Line number
 */
void _pchar(stack_t  **stack, unsigned int i)
{
/*to save the ASCII Value of the (n) in the stack*/ 
    int value;
	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", i);
		_free();
		exit(EXIT_FAILURE);
	}
    value = (*stack)->n;
/*value out of the ASCII range*/ 
    if (value < 0 || value > 127)
    {
        dprintf(2, "L%d: can't pchar, value out of range\n", i);
        _free();
        exit(EXIT_FAILURE);
    }
    printf("%c\n", value);
}