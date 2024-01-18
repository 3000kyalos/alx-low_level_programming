#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first byte of s2
 *
 * Return: pointer to newly allocated space in memory, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, s1_Len, s2_Len;

	s1_Len = strlen(s1);
	s2_Len = strlen(s2);

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
	if (n >= s2_Len)
		n = s2_Len;

	ptr = malloc((s1_Len + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (s1_Len + n); i++)
	{
		if (i < s1_Len)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - s1_Len];
	}
	ptr[i] = '\0';
	return (ptr);
}
