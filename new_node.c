#include "monty.h"
stack_t *head = NULL;
/**
 * new_node - function that creates a node
 * @n: value of the node
 * Return: Pointer to the new node or Null if it fails
 */
stack_t *new_node(int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		/*free before exit*/
		exit(EXIT_FAILURE);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	return (new_node);
}
