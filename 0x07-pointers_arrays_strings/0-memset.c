#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory
 * @s: the memory area
 * @b: the constant byte
 * @n: the first bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
