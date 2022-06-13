#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: string
 */
void _puts(char *s)
{
	int d;

	d = 0;
	while (s[d] != '\0')
	{
		putchar(s[d]);
		d++;
	}
	putchar('\n');
}

