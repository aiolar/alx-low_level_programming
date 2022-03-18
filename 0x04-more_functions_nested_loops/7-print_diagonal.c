#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: variable
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar('');
			}
			{
				_putchar(92);
				_putchar('\n');
			}
		}
	}
}
