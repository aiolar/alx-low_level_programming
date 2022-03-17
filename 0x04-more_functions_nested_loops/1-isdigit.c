#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: parameter variable
 *
 *  Return: 1 if c is a digit
 *  0 is otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
