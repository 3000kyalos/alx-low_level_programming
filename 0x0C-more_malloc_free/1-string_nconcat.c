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
	unsigned int s1_Len, s2_Len;

	s1_Len = strlen(s1);
	s2_Len = strlen(s2);

	ptr = (char *)malloc(s1_Len + n + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_Len)
	{
		n = s2_Len;
	}
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
