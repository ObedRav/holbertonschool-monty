#include "monty.h"

/**
 * div - div the top two elements of the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void mul(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (!*top || !(*top)->next)
		mul_error(line_number);

	tmp = (*top)->next;
	tmp->n *= (*top)->n;
	pop_stack(top, line_number);
}

/**
 * mod - div the top two elements of the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void mod(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (!*top || !(*top)->next)
		mod_error(line_number);

	if ((*top)->n == 0)
		div_zero_error(line_number);

	tmp = (*top)->next;
	tmp->n %= (*top)->n;
	pop_stack(top, line_number);
}

/**
 * pchar - prints the char at the top of the stack, followed by a new line
 * @top: top of stack
 * @line_number: constant int value in the structure
 */ 
void pchar(stack_t **top, unsigned int line_number)
{
	int ascii;

	if (isEmpty(*top))
		pchar_error(line_number);

	ascii = (*top)->n;

	if (ascii > 127 || ascii < 0)
		ascii_error(line_number);

	putchar(ascii);
	putchar('\n');
}
