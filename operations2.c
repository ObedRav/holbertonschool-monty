#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void swap(stack_t **top, unsigned int line_number)
{
	int data;

	if (!*top || !(*top)->next)
		swap_error(line_number);

	data = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = data;
}

/**
 * nop - doesn’t do anything.
* @top: top of stack
 * @line_number: constant int value in the structure
 */
void nop(__attribute__((unused))stack_t **top,
__attribute__((unused))unsigned int line_number)
{

}

/**
 * add - adds the top two elements of the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void add(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (!*top || !(*top)->next)
		add_error(line_number);

	tmp = (*top)->next;
	tmp->n += (*top)->n;
	pop_stack(top, line_number);
}

/**
 * sub - sub the top two elements of the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void sub(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (!*top || !(*top)->next)
		sub_error(line_number);

	tmp = (*top)->next;
	tmp->n -= (*top)->n;
	pop_stack(top, line_number);
}

/**
 * div - div the top two elements of the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void division(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (!*top || !(*top)->next)
		div_error(line_number);

	if ((*top)->n == 0)
		div_zero_error(line_number);

	tmp = (*top)->next;
	tmp->n /= (*top)->n;
	pop_stack(top, line_number);
}
