#include "monty.h"

/**
 * Function name:
 * 	set_stack
 * Description:
 * 	Sets the format of the data to a stack. 
 * NTK:
 * 	@stack: Double pointer to the top of the stack.
 * 	@line_number: Line number of where the stack opcode is in the file.
 * Return: Void.
 */
void set_stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	misc[MODE_IDX] = STACK_MODE;
}


/**
 * Function name:
 * 	set_queue
 * Description:
 * 	Sets the format of the data to a queue. A
 * NTK:
 * 	@stack: Double pointer to the top of the stack.
 * 	@line_number: Line number of where the stack opcode is in the file.
 * Return: Void.
 */
void set_queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	misc[MODE_IDX] = QUEUE_MODE;
}
