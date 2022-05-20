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

    (void)i;
    if (stack == NULL || *stack == NULL)
    {
        printf("\n"); 
        return;
    }
    while (stack)
    {
        value = (*stack)->n;
    /*value out of the ASCII range - stop */
        if (value < 0 || value > 127)
            break;
        printf("%c", value);
        *stack = (*stack)->next;
    }
    printf("/n");
}