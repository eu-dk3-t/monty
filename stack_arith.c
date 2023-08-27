#include "monty.h"

/**
 * Function name:
 * 	add
 * Description:
 * 	Adds the top two elements and pops the top and stores it in the new top
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */

void add(stack_t **stack, unsigned int line_number)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	res = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = res;
}

/**
 * Function name:
 * 	sub
 * Description:
 * 	Subtracts the top two elements and pops the top and stores it in
 * 	the new top
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 */

void sub(stack_t **stack, unsigned int line_number)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	res = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = res;
}

/**
 * Function name:
 * 	_div
 * Description:
 * 	Divides the top two elements and pops the top and stores the
 * 	result in the new top.
 * NTK:
 * 	@stack: a pointer to a pointer to the stack
 * 	@line_number: holds the line the code is run
 * Return: void
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}

	res = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = res;
}
/**
 * Function name:
 * 	mul 
 * Description:
 * 	Multiplies top two elements in a stack. 
 * NTK:
 * 	@stack: Double pointer to the top of the stack.
 * 	@line_number: Line number of where the mul opcode is in the file.
 * Return: Void.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	res = (*stack)->n * (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = res;
}

/**
 * Function name:
 * 	mod
 * Description:
 * 	Modulus operator
 * NTK:
 * 	@stack: Double pointer to the top of the stack
 * 	@line_number: Line number of where the mod opcode is in the file.
 * Return: Void.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int res;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}

	res = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = res;
}
