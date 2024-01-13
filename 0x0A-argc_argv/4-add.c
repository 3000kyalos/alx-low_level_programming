#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments used in command line
 * @argv: the command line arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		if (num >= 0)
		{
			sum += (int)num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
