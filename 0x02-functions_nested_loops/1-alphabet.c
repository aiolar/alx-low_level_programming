#include "main.h"

/**
 * main - prints alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;
	
	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(c + i);
	}
	_putchar('\n');
}
