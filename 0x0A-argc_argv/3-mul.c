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
		fprintf(stderr, "Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);
	return (0);
}
