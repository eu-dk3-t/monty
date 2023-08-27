#include "monty.h"

/**
 * Function name:
 * 	pop
 * Description:
 * 	Pops the top element of a stack
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}

	head = *stack;
	if (head->next)
		head->next->prev = NULL;
	*stack = head->next;
	free(head);
}
