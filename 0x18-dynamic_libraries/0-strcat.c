#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string to append
 * @dest: string to be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_new = 0;

	while (dest[i++])
		dest_new++;

	for (i = 0; src[i]; i++)
		dest[dest_new++] = src[i];

	return (dest);
}
