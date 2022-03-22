#include "main.h"

/**
 * puts_half - returns the length of string
 * @str: The pointer to string
 *
 * Return: On success 1.
 */

void puts_half(char *str)
{
	int i;
	int length;
	int n, m;

	for (i = 0; str[i] != '\0'; ++i)
	{
	}
	length = i;
	m = length / 2;
	n = (length - 1) / 2;
	if (length % 2 != 0)
	{
		for (i = n - 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (m - 1); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
