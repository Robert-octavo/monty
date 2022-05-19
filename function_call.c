#include "monty.h"

void function_call(op_func function, char *code, char *value, int i)
{
    stack_t *node;
    int j, check = 1;

    if (strcmp(code, "push") == 0)
    {
/* check if value is negative and its diferent from NULL*/
        if (value != NULL && value[0] == '-')
        {
            value += 1; 
            check = -1;
        }
        if (value == NULL)
        {
            printf("L%d: usage: push integer\n", i);
            exit(EXIT_FAILURE);
        }
        for(j = 0; value[j] != '\0'; j++)
        {
            if (isdigit(value[j]) == 0)
            {
                printf("L%d: usage: push integer\n", i);
                exit(EXIT_FAILURE);
            }
        }
        node = new_node(atoi(value) * check);
        function(&node, i);
    }
    else
    {
        function(&head, i);
    }


}