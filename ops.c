#include "monty.h"

/**
 * Function name:
 * 	command
 * Description:
 * 	Gets the operation from token
 * NTK:
 * 	@tok: the operation
 * Return: a function pointer
 */

void (*command(char *tok))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{ "rotr", rotr},
		{ "rotl", rotl},
		{ "pstr", char2int},
		{ "pchar", int2char},
		{ "push", push },
		{ "pall", pall },
		{ "pint", pint },
		{ "pop", pop },
		{ "swap", swap },
		{ "add", add },
		{ "sub", sub },
		{ "mul", mul },
		{ "div", _div },
		{ "mod", mod },
		{ "nop", nop },
		{ "stack", set_stack },
		{ "queue", set_queue },
		{ NULL, NULL }
	};
	int i;

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(ops[i].opcode, tok) == 0)
			return (ops[i].f);
	}
	return (NULL);
}

/**
 * Function name:
 * 	get_line
 * Description:
 * 	Parses the line for an opcode.
 * NTK:
 * 	@buffer: The line to process.
 * 	@line_number: Current line number
 * 	@stack: Double pointer to the beginning of the stack.
 * Return: Void.
 */
void get_line(char *buffer, unsigned int line_number, stack_t **stack)
{
	char *token;
	char *save_point;
	void (*f)(stack_t **stack, unsigned int line_number);

	token = strtok_r(buffer, " \t\n", &save_point);
	if (token != NULL && token[0] != '#')
	{
		f = command(token);
		if (f == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n",
					line_number, token);
			misc[ERROR_IDX] = 1;
			return;
		}
		if (f == push)
		{
			token = strtok_r(NULL, " \t\n", &save_point);
			if (token == NULL || check_num(token) == 0)
			{
				fprintf(stderr, "L%u: usage: push integer\n",
						line_number);
				misc[ERROR_IDX] = 1;
				return;
			}
			misc[N_IDX] = atoi(token);
		}
		f(stack, line_number);
	}
}
