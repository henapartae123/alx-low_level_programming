#include <stdio.h>
/**
 * main - printd the name of the file it was compiled from
 * Return: nothing
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
