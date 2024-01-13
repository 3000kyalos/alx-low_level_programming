#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguements passed
 * @argv: pointer to the command line arguements
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
