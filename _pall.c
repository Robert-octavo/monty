#include "monty.h"
/**
 * _pall - function that prints all the stack
 * @stack: Is the first attribute
 * @i: Line number
 */
void _pall(stack_t  **stack, __attribute__((__unused__)) unsigned int i)
{
/*check if it enter to the function*/
/*   printf("enter pall: %d", i);*/
	stack_t *tmp;
/*   (void) i;*/
	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
