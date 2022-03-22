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
	n = (i - 1) / 2;
	if (i % 2 != 0)
	{
		i = (i + 1) / 2;
		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
	}
	else if (length % 2 == 0)
	{
		i /= 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
	}
	_putchar('\n');
}
