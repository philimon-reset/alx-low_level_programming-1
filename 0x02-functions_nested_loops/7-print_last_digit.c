#include "holberton.h"

/**
 * print_last_digit - prints the last digit of the input
 * @n: number to be computed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
