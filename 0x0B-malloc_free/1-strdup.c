#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 *
 * Return: pointer to the duplicated string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
