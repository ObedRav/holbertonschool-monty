#include "monty.h"

/**
 * main - main program
 * @argc: total of arguments
 * @argv: The arguments, monty files
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		error_arguments();
	open_and_read(argv);
	return (0);
}
