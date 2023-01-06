#include "monty.h"

/**
 * mul - mul the top two elements of the stack
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
 * mod - mod the top two elements of the stack
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

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void pstr(stack_t **top, __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp;
	int ascii;

	if (isEmpty(*top))
	{
		putchar('\n');
		return;
	}

	tmp = *top;
	while (tmp)
	{
		ascii = tmp->n;
		if (ascii > 127 || ascii <= 0)
			break;
		putchar(ascii);
		tmp = tmp->next;
	}
	putchar('\n');
}

/**
 * rotl - rotates the stack to the top
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void rotl(stack_t **top, unsigned int line_number)
{
	stack_t *tmp, *new;

	if (isEmpty(*top) || isEmpty((*top)->next))
		return;

	new = malloc(sizeof(stack_t));
	new->n = (*top)->n;
	new->prev = NULL;
	new->next = NULL;

	tmp = (*top);
	while (tmp->next)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;

	pop_stack(top, line_number);
}
