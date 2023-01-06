#include "monty.h"

/**
 * ascii_error - print err msg
 * @line: line
 */
void ascii_error(unsigned int line)
{
    fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
    exit(1);
}