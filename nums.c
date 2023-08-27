#include "monty.h"

/**
 * Function name:
 * 	check_num 
 * Description:
 * 	Checks if a string is a number.
 * NTK:
 * 	@num: Pointer to the supposed number string.
 * Return:
 * 	 0 - Not present
 * 	 1 - Present
 */
char check_num(char *num)
{
	unsigned int i;

	if (num[0] == '-')
		i = 1;
	else
		i = 0;
	for (; num[i] != '\0'; i++)
	{
		if (num[i] > '9' || num[i] < '0')
			return (0);
	}
	return (1);
}

/**
 * Function name:
 * 	char2int
 * Description:
 * 	Prints the integer values of a stack as ascii characters.
 * NTK:
 * 	@stack: Double pointer to the top of the stack
 * 	@line_number: Line number of where the pstr opcode is in the file.
 */

void char2int(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int ascii;
	(void) line_number;

	if (stack != NULL)
	{
		current = *stack;
		while (current != NULL)
		{
			ascii = current->n;
			if (ascii != 0 && ascii > 0 && ascii <= 127)
				putchar(ascii);
			else
				break;
			current = current->next;
		}
	}
	putchar('\n');
}

/**
 * Function name:
 * 	int2char
 * Description:
 *	Print int values ofascii characters
 * NTK:
 * 	@stack: Double pointer to the top of the stack
 * 	@line_number: Line number of where the pchar opcode is in the file.
 * Return: Void.
 */
void int2char(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		misc[ERROR_IDX] = 1;
		return;
	}

	printf("%c\n", (*stack)->n);
}
