#include "main.h"
/**
 * main - block
 * Description: check for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	} 	
}
