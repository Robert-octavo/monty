#include "monty.h"
/**
 * _pall - function that prints all the stack
 * @new: Pointer to the top node of the stack
 * @i: Line number
 */
void _pall(stack_t  **stack, unsigned int i)
{
/*check if it enter to the function*/
 /*   printf("enter pall: %d", i);*/
    stack_t *tmp;
    (void) i;
    if (stack == NULL)
        exit(EXIT_FAILURE);
    tmp = *stack;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}