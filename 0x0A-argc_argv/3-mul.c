#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument counter
 * @argv: argument vector string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		k = i * j;
		printf("%d\n", k);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
