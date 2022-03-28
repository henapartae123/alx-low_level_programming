#include "main.h"
/**
 * *_memset - fills the first n bytes of memory with a constant byte
 * @s: area to be filled
 * @b: char to be filled to the area
 * @n: number of time to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
