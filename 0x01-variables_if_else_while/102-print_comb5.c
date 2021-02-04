#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
<<<<<<< HEAD
	int c, c_two
=======
	int c, c_two;
>>>>>>> 323bbd5c901d68de560b29309b5954e933077fea

	for (c = 0; c <= 98; c++)
	{
		for (c_two = c + 1; c_two <= 99; c_two++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(32);
			putchar('0' + c_two / 10);
			putchar('0' + c_two % 10);
			if (c / 10 != 9 || c % 10 != 8)
			{
				putchar(44);
			}
		}
	}
	putchar(10);
	return (0);
}
