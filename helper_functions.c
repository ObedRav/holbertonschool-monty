#include "monty.h"

/**
 * isEmpty - check if the list is empty
 * @top: the top of the stack
 * Return: 1 if the list is empty and 0 otherwise
 */
int isEmpty(stack_t *top)
{
	if (!top)
		return (1);
	return (0);
}

/**
 * _isdigit - return 1
 * Return: 1 if c is a digit from 0-9
 * @c: Data from user
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched
 *         characters.
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched
 *         characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 *           null byte (\0), to the buffer pointed to by dest.
 * @dest: destiny pointer
 * @src: origin pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
