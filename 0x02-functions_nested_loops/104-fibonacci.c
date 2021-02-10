#include <stdio.h>

/**
 * main - Entry point, prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int counter = 2;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long fib;

	printf("1, 2, ");
	while (counter <= 97)
	{
		fib = first + second;
		if (counter < 97)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu", fib);
		}
		first = second;
		second = fib;
		counter++;
	}
	printf("\n");
	return (0);
}
