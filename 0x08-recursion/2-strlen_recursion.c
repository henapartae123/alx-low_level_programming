#include "main.h"
/**
 * _strln_recursion - calculate the length of a string
 * @s: the string to evaluate
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
