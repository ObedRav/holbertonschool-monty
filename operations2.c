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