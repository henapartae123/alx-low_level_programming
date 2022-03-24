#include "main.h"
/**
 * reverser_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
