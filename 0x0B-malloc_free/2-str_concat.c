#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (result == NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
