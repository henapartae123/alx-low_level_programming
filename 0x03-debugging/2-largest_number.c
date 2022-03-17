#include "main.h"
/**
 * Description: returns the largest number of 3 numbers
 * @a: first number
 * @b: second number
 * @c: thirs number
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}
	if (c > largest)
	{
		largest = c;
	}
	return (largest);
}
