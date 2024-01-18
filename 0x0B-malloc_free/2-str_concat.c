#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the two strings, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, s1_Len, s2_Len;

	s1_Len = 0;
	s2_Len = 0;

	if (s1 == NULL)
		s1 = "";
	else
		for (; s1[s1_Len]; s1_Len++)
			;
	if (s2 == NULL)
		s2 = "";
	else
		for (; s2[s2_Len]; s2_Len++)
			;
	s2_Len++;

	result = malloc((s1_Len + s2_Len) * sizeof(char));

	if (result == NULL)
	{
		fprintf(stderr, "failed to allocate memory");
		exit(1);
	}
	for (i = 0; i <= (s1_Len + s2_Len); i++)
	{
		if (i < s1_Len)
			result[i] = s1[i];
		else
			result[i] = s2[i - s1_Len];
	}
	return (result);
}
