#include "monty.h"
int number;

/**
 * push_stack - add node to stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void push_stack(stack_t **top, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp;

	tmp = malloc(sizeof(stack_t));
	if (tmp == NULL)
		malloc_error();

	tmp->n = number;
	tmp->prev = NULL;
	if (isEmpty(*top))
	{
		tmp->next = NULL;
		*top = tmp;
	}
	else
	{
        tmp->next = *top;
        (*top)->prev = tmp;
        *top = tmp;
	}
}

/**
 * pall_stack - prints the stack
 * @top: top of stack
 * @line_number: constant int value in the structure
 */
void pall_stack(stack_t **top, __attribute__((unused)) unsigned int line_number)
{
    stack_t *tmp = *top;

    while(tmp)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}

/**
 * free_stack - free the stack
 * @top: top of stack
 */
void free_stack(stack_t *top)
{
    stack_t *tmp;

    if (!top)
        return;
    
    while (top)
    {
        tmp = top;
        top = tmp->next;
        free(tmp);
    }
    free(top);
}