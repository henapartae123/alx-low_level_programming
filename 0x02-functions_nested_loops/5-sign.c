#include "main.h"
/**
 * main - block
 * Description: print the sign of a number 
 * Return 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int c)
{
	if ( c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ( c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
