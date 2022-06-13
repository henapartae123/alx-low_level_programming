#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: buffer storing the copy
 * @src: source
 * @n: maximum number of bytes to be copied
 * Return: a pointer to the result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_new = 0;

	while (src[i++])
		src_new++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_new; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
