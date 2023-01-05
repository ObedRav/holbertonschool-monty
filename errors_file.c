#include "monty.h"

/**
 * error_arguments - print an error if the user doesn't
 *                   give file or more than valid arguments
 */
void error_arguments(void)
{
    fprintf(stderr, "USAGE: monty file\n");
    exit(1);
}

/**
 * open_error - print message if its not possible to open the file
 * @argv: arguments received by main, ni this case te filename
 * Return: void
 */
void open_error(char **argv)
{
	char *filename = argv[1];

	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(1);
}

/**
 * invalidInstruction_error - print message if le to open the filehas an invalid instruction
 * @invInstruction: instruction
 * @line: line
 */
void invalidInstruction_error(char *invInstruction, unsigned int line)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, invInstruction);
	exit(1);
}

/**
 * not_int_err - print message if parameter received is not integer
 * @line: line
 */
void not_int_err(unsigned int line)
{
	fprintf(stderr, "L%u: usage: push integer\n", line);
	exit(1);
}

/**
 * malloc_error - print message if cant malloc anymore
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(1);
}