#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * print alphabet in lowercase and uppercase
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c<='z')
	{
		putchar(c);
		c++;
	}
	
putchar('\n');
return (0);
}
