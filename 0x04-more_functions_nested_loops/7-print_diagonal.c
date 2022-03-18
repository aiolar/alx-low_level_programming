#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: variable
 * Return: Always 0.
 */

void print_line(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j< n; j++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
