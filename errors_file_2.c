#include "monty.h"

/**
 * pint_error - print error message if the stack is empty
 * @line: line
 */
void pint_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(1);
}

/**
 * pop_error - print error message if the stack is empty
 * @line: line
 */
void pop_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(1);
}

/**
 * swap_error - print err msg if stack is less than two elemets
 * @line: line
 */
void swap_error(unsigned int line)
{
    fprintf(stderr, "L%u: can't swap, stack too short\n", line);
    exit(1);
}

void add_error(unsigned int line)
{
    fprintf(stderr, "L%u: can't add, stack too short\n", line);
    exit(1);
}