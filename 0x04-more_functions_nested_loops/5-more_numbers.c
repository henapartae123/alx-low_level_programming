#include "main.h"
/**
 * Description: more_numbers prints numbers 0-14
 * Return: void
 */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i/10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
