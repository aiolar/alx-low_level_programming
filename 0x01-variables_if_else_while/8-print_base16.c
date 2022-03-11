#include <stdio.h>

/**
 * main - this program prints alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alp;

	for (alp = 0 ; alp <= 16 ; alp++)
	{
		putchar(alp + '0');
		if (alp > 9)
		{
			putchar(alp - 48);
		}
	}
	putchar('\n');
	return (0);
}
