#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arguments passed to the program
 * @argv: array containing the program command line arguements
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
