#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: First value to swap
 * @b: Second value to swap
 *
 * Return: On success 1.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
