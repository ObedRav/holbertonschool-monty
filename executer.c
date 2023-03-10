#include "monty.h"
int number;

/**
 * open_and_read - open a file, and read and execute
 * @argv: arguments received
 */
void open_and_read(char **argv)
{
	void (*p_func)(stack_t **, unsigned int);
	FILE *fp;
	char *buf = NULL, *token = NULL, command[MAX];
	size_t len = 0;
	ssize_t line_size;
	unsigned int line_counter = 1;
	stack_t *top = NULL;

	fp = fopen(argv[1], "r");
	if (!fp)
		open_error(argv);
	while ((line_size = getline(&buf, &len, fp)) != -1)
	{
		token = strtok(buf, " \n\t\r");
		if (token == NULL || *token == '\0')
		{
			line_counter++;
			continue;
		}
		_strcpy(command, token);
		if (is_comment(token, line_counter) == 1)
			continue;
		if (_strcmp(token, "push") == 0)
		{	token = strtok(NULL, " \n\t\r");
			if (!token || is_number(token) == -1)
				not_int_err(line_counter);
			number = atoi(token);
			p_func = get_op_code(command, line_counter);
			p_func(&top, line_counter);
		}
		else
		{
			p_func = get_op_code(token, line_counter);
			p_func(&top, line_counter);
		}
		line_counter++;
	} fclose(fp);
	if (buf)
		free(buf);
	free_stack(top);
}

/**
 * is_number - check if string received is int or not
 * @token: string to check
 * Return: -1 if sring is not int or 1 if yes
 */
int is_number(char *token)
{
	int i;

	if (token == NULL)
		return (-1);

	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] != '-' && _isdigit(token[i]) == 0)
			return (-1);
	}
	return (1);
}

/**
 * is_comment - check if string received is # or not
 * @token: string to check
 * @line_counter: line
 * Return: -1 if sring is not # or 1 if yes
 */
int is_comment(char *token, int line_counter)
{
	if (token == NULL || token[0] == '#')
	{
		line_counter++;
		return (1);
	}
	return (-1);
}
