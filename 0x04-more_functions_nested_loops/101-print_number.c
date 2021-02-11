#include "holberton.h"
#include <math.h>

/**
 * print_number - prints a number using _putchar
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int counter = 0, tmp, i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			flag = 1;
		}

		tmp = n;

		while (tmp)
		{
			tmp /= 10;
			counter++;
		}

		if (flag)
		{
			_putchar('-');
		}

		for (i = counter - 1; i >= 0; i--)
		{
			_putchar(((n / (int) pow((double) 10, (double) i)) % 10) = '0');
		}
	}
}
