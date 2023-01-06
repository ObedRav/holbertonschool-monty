#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void rotr(stack_t **top, __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp;

	if (isEmpty(*top) || isEmpty((*top)->next))
		return;

	tmp = (*top);
	while (tmp->next)
		tmp = tmp->next;

	tmp->prev->next = NULL;
	tmp->prev = NULL;
	tmp->next = *top;
	(*top)->prev = tmp;
	*top = tmp;
}
