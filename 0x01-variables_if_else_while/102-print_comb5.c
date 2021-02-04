#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c, c_two;

	for (c = 0; c <= 98; c++)
	{
		for (c_two = c + 1; c_two <= 99; c_two++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(32);
			putchar('0' + c_two / 10);
			putchar('0' + c_two % 10);
			if (c != 56 || c_two != 57)
			{
				putchar(44);
			}
		}
	}

	putchar(10);
	return (0);
}
