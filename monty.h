#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 1024

extern int number;

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

/**
 * errors_file
 */
void error_arguments(void);
void open_error(char **argv);
void invalidInstruction_error(char *invInstruction, unsigned int line);
void not_int_err(unsigned int line);
void malloc_error(void);

/**
 * errors_file_2
 */
void pint_error(unsigned int line);
void pop_error(unsigned int line);
void swap_error(unsigned int line);
void add_error(unsigned int line);
void sub_error(unsigned int line);

/**
 * errors_file_3
 */
void div_error(unsigned int line);
void mul_error(unsigned int line);
void mod_error(unsigned int line);
void div_zero_error(unsigned int line);
void pchar_error(unsigned int line);

/**
 * errors_file_4
 */
void ascii_error(unsigned int line);

/**
 * Executer
 */
void open_and_read(char **argv);
int is_number(char *token);
int is_comment(char *token, int line_counter);


/**
 * helper_functions
 */
int isEmpty(stack_t *top);
int _isdigit(int c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);

/**
 * opcodes
 */
void (*get_op_code(char *token, unsigned int line))(stack_t **, unsigned int);

/**
 * operations
 */
void push_stack(stack_t **top, __attribute__((unused))unsigned int line_number);
void pall_stack(stack_t **top, __attribute__((unused))unsigned int line_number);
void free_stack(stack_t *top);
void pint_stack(stack_t **top, unsigned int line_number);
void pop_stack(stack_t **top, unsigned int line_number);

/**
 * operations2
 */
void swap(stack_t **top, unsigned int line_number);
void nop(__attribute__((unused))stack_t **top, 
__attribute__((unused))unsigned int line_number);
void add(stack_t **top, unsigned int line_number);
void sub(stack_t **top, unsigned int line_number);
void division(stack_t **top, unsigned int line_number);

/**
 * operations3
 */
void mul(stack_t **top, unsigned int line_number);
void mod(stack_t **top, unsigned int line_number);
void pchar(stack_t **top, unsigned int line_number);

#endif