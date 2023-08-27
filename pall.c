#include "monty.h"

/**
 * Function name:
 * 	pall 
 * Description:
 * 	Prints all elements in the stack
 * NTK:	
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	(void) line_number;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
