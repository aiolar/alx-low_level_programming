#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 *
 */

void more_numbers(void)
{
	int i;

	while (k < 15)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		k++;
	}
	return (0);
}
