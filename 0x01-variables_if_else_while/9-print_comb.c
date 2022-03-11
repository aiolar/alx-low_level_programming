#include <stdio.h>

/**
 * main - this program prints alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alp;

	for (alp = 0 ; alp < 10 ; alp++)
	{
		putchar(alp + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
