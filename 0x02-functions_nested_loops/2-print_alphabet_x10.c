#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i;
	int counter = 0;

	while (counter < 10)
	{
		for (i = 0 ; i < 26 ; i++)
		{
			_putchar(c + i);
		}
		_putchar('\n');
		counter++;
	}
}
