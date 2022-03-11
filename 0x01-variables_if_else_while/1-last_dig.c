#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program to print the last digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_no = n % 10;
	printf("Last digit of %d is %d", n, last_no);
	if (last_no > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_no == 0)
	{
		printf("and is 0\n");
	}
	else if ((last_no < 6) && (last_no != 0))
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
