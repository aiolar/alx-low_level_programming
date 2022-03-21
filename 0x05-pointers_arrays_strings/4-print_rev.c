#include "main.h"

/**
 * _puts - print a string followed by new line
 * @s: The pointer to string
 *
 * Return: On success 1.
 */

void print_rev(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
