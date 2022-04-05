#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * which contains a copy of the string as a parameter
 * @str: string to be copied
 * Return: a pointer to to the str or NULL
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}
