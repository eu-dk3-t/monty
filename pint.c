#include "monty.h"

/**
 * Function name:
 * 	pint 
 * Description:
 * 	Prints the top element in the stack
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	printf("%d\n", (*stack)->n);
}

