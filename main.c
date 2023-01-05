#include "monty.h"

/**
 * main - main program
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		error_arguments();
	open_and_read(argv);
	return (0);
}
