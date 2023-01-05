#include "monty.h"

/**
 * div_error - print err msg
 * @line: line
 */
void div_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(1);
}

/**
 * mul_error - print err msg
 * @line: line
 */
void mul_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(1);
}

/**
 * mod_error - print err msg
 * @line: line
 */
void mod_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(1);
}

/**
 * div_zero_error - print err msg
 * @line: line
 */
void div_zero_error(unsigned int line)
{
	fprintf(stderr, "L%u: division by zero\n", line);
	exit(1);
}

