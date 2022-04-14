#include "variadic_functions.h"
/**
 * print_numbers - entry point
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
		{
			if (count < n - 1)
				printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(args);
}
