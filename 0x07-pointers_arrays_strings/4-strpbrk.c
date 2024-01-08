#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
