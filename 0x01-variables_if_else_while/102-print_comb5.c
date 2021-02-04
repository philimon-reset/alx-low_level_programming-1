#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c, c_two, c_three, c_four;

	for (c = 48; c <= 57; c++)
	{
		for (c_two = 48; c_two <= 57; c_two++)
		{
			if (c != 57 || c_two != 57)
			{
				for (c_three = 48; c_three <= 57; c_three++)
				{
					for (c_four = 48; c_four <= 57; c_four++)
					{
						if (c_three != 48 || c_four != 48)
						{
							putchar(c);
							putchar(c_two);
							putchar(32);
							putchar(c_three);
							putchar(c_four);
							if (c != 57 || c_two != 56 || c_three != 57 || c-four != 57)
							{
								putchar(44);
								putchar(32);
							}
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
