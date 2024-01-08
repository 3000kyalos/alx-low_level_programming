#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: number of bytes
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}
	return (length);
}
