#ifndef _MONTY_H_
#define _MONTY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO 
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO 
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int misc[];

#define N_IDX 0
#define MODE_IDX 1
#define ERROR_IDX 2

#define STACK_MODE 1
#define QUEUE_MODE 0

void (*command(char *tok))(stack_t **stack, unsigned int line_number);
void get_line(char *buffer, unsigned int line_number, stack_t **stack);
void free_stack(stack_t *stack);
size_t getline(char** buf, size_t* bufLen, FILE* f);
char* strtok_r(char* str, const char* delim, char** saveptr);

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
/* Stack arith */
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
/* NUms */
void char2int(stack_t **stack, unsigned int line_number);
void int2char(stack_t **stack, unsigned int line_number);
/* Rotate */
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
/* Format */
void set_stack(stack_t **stack, unsigned int line_number);
void set_queue(stack_t **stack, unsigned int line_number);
char check_num(char *num);

#endif /*__MONTY_H__*/
