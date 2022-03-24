#include "main.h"
/**
 * _strncat - concatenates two strings using 'n' bytes from src
 * @dest: string to append
 * @src: string to be appended
 * @n: bytes to use from src
 * Return: a pointer to the result string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_new = 0;

	while (dest[i++])
		dest_new++;

	for (i = 0; src[i] && i < 1; i++)
		dest[dest_new++] = src[i];

	return (dest);
}
