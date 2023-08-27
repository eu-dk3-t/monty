#include "monty.h"

/**
 * Function name:
 * 	rotl 
 * Description:
 * 	Rotates the stack. Top --> Bottom
 * NTK:
 * 	@stack: Double pointer to the top of the stack.
 * 	@line_number: Line number of where the mul opcode is in the file.
 * Return: Void.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last_ptr;
	stack_t *head;
	stack_t *next;
	(void)line_number;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	last_ptr = *stack;
	head = *stack;
	next = head->next;
	while (last_ptr->next != NULL)
		last_ptr = last_ptr->next;
	next->prev = NULL;
	last_ptr->next = head;
	head->next = NULL;
	head->prev = last_ptr;
	*stack = next;
}

/**
 * Function name:
 * 	rotr 
 * Description:
 * 	Rotates the stack Bottom --> Top
 * NTK:
 * 	@stack: Double pointer to the top of the stack.
 * 	@line_number: Line number of where the mul opcode is in the file.
 * Return: Void.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last_ptr;
	stack_t *head;
	(void)line_number;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	last_ptr = *stack;
	head = *stack;
	while (last_ptr->next != NULL)
		last_ptr = last_ptr->next;
	head->prev = last_ptr;
	last_ptr->prev->next = NULL;
	last_ptr->next = head;
	last_ptr->prev = NULL;
	*stack = last_ptr;
}
