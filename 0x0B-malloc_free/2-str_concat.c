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
	int s1_Len, s2_Len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		for (; s1[s1_Len]; s1_Len++)
			;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (; s2[s2_Len]; s2_Len++)
			;
	}
	s2_Len++;

	result = (char *)malloc((s1_Len + s2_Len + 1) * sizeof(char));

	if (result == NULL)
	{
		fprintf(stderr, "failed to allocate memory");
		exit(1);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
