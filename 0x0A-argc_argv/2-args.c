#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments passed to the program
 * @argv: the command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
