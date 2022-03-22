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

	for (i = 0; str[i] != '\0'; ++i)
	{
	}
	if (i % 2 != 0)
	{
		i = (i + 1) / 2;
		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
	}
	else if (i % 2 == 0)
	{
		i /= 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
	}
	_putchar('\n');
}
