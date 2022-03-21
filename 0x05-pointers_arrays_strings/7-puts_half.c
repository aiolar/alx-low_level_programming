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
	int n;

	for (i = 0; str[i] != '\0'; ++i)
	{
	}
	length = i;
	n = (length - 1) / 2;
	if (length % 2 != 0)
	{
		for (i = n; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = length / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
