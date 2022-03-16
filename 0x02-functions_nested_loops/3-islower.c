#include "main.h"
/**
 * main - block
 * Description: check for lowercase characters
 * Return: 1 is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
