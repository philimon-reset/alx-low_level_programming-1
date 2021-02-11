#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int tmp = size, i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
