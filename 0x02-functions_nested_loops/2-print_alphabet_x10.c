#include "main.h"
/**
 * main - block
 * Description: print alphabet in lower case 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
