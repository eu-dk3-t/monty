#include "monty.h"

/**
 * Function name:
 * 	free_stack
 * Description:
 * 	Frees up the memory allocated for the stack.
 * NTK:
 * 	@stack: Pointer to the beginning of the stack.
 * Return: Void.
 */
void free_stack(stack_t *stack)
{
	stack_t *next;

	while (stack != NULL)
	{
		next = stack->next;
		free(stack);
		stack = next;
	}
}
/**
 * Function name:
 * 	nop
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
