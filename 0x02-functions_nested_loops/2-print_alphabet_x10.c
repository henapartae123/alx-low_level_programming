#include <main.h>
/**
 * main - block
 * Description: print alphabet in lower case 10x
 * Return: 0
 */
int main(void)
{
	char ch = "a";
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	putchar('\n');
	}
return (0);
}
