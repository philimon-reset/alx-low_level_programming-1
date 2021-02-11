#include "holberton.h"

/**
 * print_diagonal - prints a diagonal
 * @n: length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int tmp = n;

	while (n > 0)
	{
		while (tmp - n > 0)
		{
			_putchar(' ');
		}
		_putchar('-');
		n--;
	}

	_putchar('\n');
}
