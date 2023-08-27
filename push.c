#include "monty.h"

/**
 * Function name:
 * 	push
 * Description:
 * 	Pushes a node
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: Pointer to string containing a number.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	stack_t *end;
	(void) line_number;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		misc[ERROR_IDX] = 1;
		return;
	}

	new->n = misc[N_IDX];
	new->prev = NULL;
	new->next = NULL;
	if (misc[MODE_IDX] == STACK_MODE)
	{
		new->next = (*stack);
		if (*stack)
			(*stack)->prev = new;
		*stack = new;
	}
	else
	{
		if (*stack == NULL)
		{
			*stack = new;
		}
		else
		{
			end = *stack;
			while (end->next != NULL)
				end = end->next;
			end->next = new;
			new->prev = end;
		}
	}
}

