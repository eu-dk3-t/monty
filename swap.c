#include "monty.h"
/**
 * Function name:
 * 	swap 
 * Description:
 * 	Swaps the top two elements
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head;
	stack_t *next;
	int temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}

	head = *stack;
	next = (*stack)->next;
	temp = head->n;
	head->n = next->n;
	next->n = temp;
}
