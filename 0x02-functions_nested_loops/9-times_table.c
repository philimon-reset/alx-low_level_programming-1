#include "holberton.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Doesn't return anything, void
 */
void times_table(void)
{
	char i;
	int j, product;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			product = j * i;
			if (product > 9)
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
