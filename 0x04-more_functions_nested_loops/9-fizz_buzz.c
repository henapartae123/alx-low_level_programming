#include <stdio.h>
/**
 * main - block
 * Description: prints numbers from 1 to 100
 * multiples of 3, print Fizz. multiples of 5, print Buzz
 * multiples of both 3 and 5 should print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if ( i % 3 == 0)
			printf("Fizz");
		else if ( i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if ( i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

return (0);
}
