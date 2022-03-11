#include <stdio.h>

/**
 * main - this program prints alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alp;

	for (alp = 0 ; alp < 16 ; alp++)
	{
		if (alp < 10)
		{
			putchar(alp + '0');
		}
		else if (alp > 9)
		{
			putchar(alp + 97 - 10);
		}
	}
	putchar('\n');
	return (0);
}
