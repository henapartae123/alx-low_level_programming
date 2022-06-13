#include <stdio.h>
#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string to search in
 * @c: char to be located
 * Return: a pointer to the first occurrence of the char
 * c or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
