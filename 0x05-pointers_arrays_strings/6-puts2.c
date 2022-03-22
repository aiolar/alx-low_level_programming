#include "main.h"

/**
 * puts2 - print a string followed by new line
 * @str: The pointer to string
 *
 * Return: On success 1.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
