#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	for (i = 0; i < n && *src != '\0'; temp++, src++)
	{
		*temp = *src;
	}
	for (; n > 0; n--, temp++)
	{
		*temp = '\0';
	}
	return (dest);
}
