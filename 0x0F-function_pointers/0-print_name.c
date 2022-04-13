#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: pointer to a variable
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
