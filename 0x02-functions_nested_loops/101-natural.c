#include <stdio.h>
int is_multiple_3_5(int);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1023;
	int output = 0;

	for (; i >= 0; i--)
	{
		if (is_multiple_3_5(i))
		{
			output += i;
		}
	}
	printf("%d\n", output);
	return (0);
}

/**
 * is_multiple_3_5 - checks whether a number is a multiple of 3 or 5
 * @n: number to be checked
 *
 * Return: 1 if the number is a multiple of 3 or 5, or both
 * 0 otherwise
 */
int is_multiple_3_5(int n)
{
	if (n % 3 == 0 || n % 5 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
