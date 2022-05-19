#include "monty.h"
/**
 * _free - Free nodes
 */
void _free(void)
{
	stack_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
