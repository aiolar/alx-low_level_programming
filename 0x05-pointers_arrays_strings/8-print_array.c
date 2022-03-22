#include "main.h"
#include <stdio.h>
/**
 * print_array - returns the length of string
 * @a: The pointer to int
 * @n: variable parameter
 *
 * Return: On success 1.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
