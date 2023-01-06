#include "monty.h"

/**
 * get_op_code - contain the finction that will perfom to the operation
 * @token: the operation
 * @line: line readed
 * Return: NULL
 */
void (*get_op_code(char *token, unsigned int line))(stack_t **, unsigned int)
{
	int i;
	instruction_t operations[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"pop", pop_stack},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{"sub", sub},
		{"mod", mod},
		{"div", division},
		{"mul", mul},
		{"pchar", pchar},
		{NULL, NULL}
	};

	for (i = 0; operations[i].opcode != NULL; i++)
	{
		if (_strcmp(operations[i].opcode, token) == 0)
			return (operations[i].f);
	}
	invalidInstruction_error(token, line);
	return (NULL);
}
