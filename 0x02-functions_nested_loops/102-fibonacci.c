#include <stdio.h>

/**
 * main - Entry point, prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int counter = 2;
	long first = 1;
	long second = 2;
	long fib;

	printf("1, 2, ");
	while (counter <= 48)
	{
		fib = first + second;
		if (counter != 48)
		{
			printf("%ld, ", fib);
		}
		else
		{
			printf("%ld\n", fib);
		}
		first = second;
		second = fib;
		counter++;
	}
	return (0);
}
