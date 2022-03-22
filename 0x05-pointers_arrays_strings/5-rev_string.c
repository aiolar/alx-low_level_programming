#include "main.h"

/**
 * rev_string - print a string reversed followed by new line
 * @s: The pointer to string
 *
 * Return: On success 1.
 */

void rev_string(char *s)
{
	int i, max, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
