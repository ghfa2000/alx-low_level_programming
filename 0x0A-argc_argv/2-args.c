#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: array size
 * @argv: array containing elements
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}

	return (0);
}

