#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: number to be used
 *
 * Return: Doesn't return anything, void
 */
void print_times_table(int n)
{
	char i;
	int j, product;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (i = 0; i <= n; i++)
			{
				product = j * i;
				if (product > 99)
				{
					_putchar(product / 100 + '0');
					_putchar(product / 10 + '0');
				}
				else if (product > 9 && product <= 99)
				{
					_putchar(product / 10 + '0');
				}
				_putchar(product % 10 + '0');
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
}
