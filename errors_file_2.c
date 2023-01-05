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