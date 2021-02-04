#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c, c_two, first, second, third, fourth;
	
	for (c = 0; c <= 98; c++)
	{
		for (c_two = c + 1; c_two <= 99; c_two++)
		{
			first = c / 10;
			second = c % 10;
			third = c_two / 10;
			fourth = c_two % 10;
			
			putchar(first);
			putchar(second);
			putchar(32);
			putchar(third);
			putchar(fourth);
			putchar(44);
		}
	}
	putchar(10);
	return (0);
}
