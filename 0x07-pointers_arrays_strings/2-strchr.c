#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: c if located otherwise return NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
