#include "main.h"
/**
 * main - block
 * Description: prints the last digit of a numbet
 * print_last_digit - n is a n integer
 * Return: integer
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
