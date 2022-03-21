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
	
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
