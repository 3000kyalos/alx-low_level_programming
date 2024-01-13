#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments passed
 * @argv: the command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = strtol(argv[1], 0, 10);
	y = strtol(argv[2], 0, 10);
	mul = x * y;

	printf("%d\n", mul);
	return (0);
}
