#include "main.h"
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
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
