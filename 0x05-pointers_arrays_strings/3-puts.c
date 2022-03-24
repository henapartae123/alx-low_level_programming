#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	int d;

	d = 0;
	while (str[d] != '\0')
	{
		putchar(str[d]);
		d++;
	}
	putchar('\n');
}

